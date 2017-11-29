clear all; close all;
global env;
%global commands;
load_data;
addpath('lib');
addpath(strcat('voicebox',env.slash));
env.Ntot = 0;
env.Ncl = length(commands);
for i = 1:env.Ncl
    env.Ntot = env.Ntot + size(commands{i}.audio,1);
end
env.n = size(commands{i}.audio,1);
data = cell(env.Ntot,6);
ind = 1;
for i=1:env.Ncl
    data(ind:ind-1+size(commands{i}.audio,1),1:3) = commands{i}.audio;
    labels = cell(size(commands{i}.audio,1),1);
    lab = str2num(commands{i}.description);
    for j=1:length(labels)
        labels{j} = lab;
    end
    data(ind:ind-1+size(commands{i}.audio,1),4) = labels;
    ind = ind + length(labels);
end
clearvars i j labels lab ind;
env.computeMEL = false;
if env.computeMEL
    tic;
    for i=1:env.Ntot
        data{i,5} = melcepst(data{i,1}, data{i,2});
    end
    clearvars i;
    disp('MFCC computed');
    toc;
end

env.computeDTW = false;
env.computeMeans = false;

if env.computeDTW
    tic;
    for i=1:env.Ntot
        J = 1:env.Ntot;
        J(i) = [];
        % dtw e path
        dtws = zeros(env.Ntot,1);
        paths = cell(env.Ntot,1);

        dtws(i) = inf;
        paths{i} = [inf];
        for j=J
            if isstruct(data{j,6})
                dtws(j) = data{j,6}.dtw(i);
                paths{j} = fliplr(data{j,6}.path{i});
            else
                [dtws(j), paths{j}] = MFCCmatch_mex(data{i,5},data{j,5});
            end
        end
        tmp.dtw = dtws;
        tmp.path = paths;
        data{i,6} = tmp;
        if (mod(i,round(env.Ntot/10))==0)
            disp(strcat(int2str(round(i*100/env.Ntot)),'%'));
        end
    end
    disp('DTWs computed');
    toc;
    clearvars i j tmp dtws paths J
    save(strcat('mat',env.slash,'dtw_computed.mat'),'data');
else
    if env.computeMeans
        load(strcat('mat',env.slash,'dtw_computed.mat'));
    end
end

if env.computeMeans
    for wM = 0.5 : 0.1 : 1
    env.weightMean = wM;
        if env.computeMeans
            env.K = [5, 10];
            env.out = cell(length(env.K),1);
            for k_ind=1:length(env.K)
                k = env.K(k_ind);
                out = cell(1,k);
                Nte = round(env.n/k);
                Ntr = env.n - Nte;    
                for ki=1:k
                    outs = cell(env.Ncl,4);
                    % will have 2 candidates MFCC and the variance
                    te_ind = [(Nte/2)*(ki-1)+1 : (Nte/2)*ki, ...
                        env.n/2+(Nte/2)*(ki-1)+1 : env.n/2+(Nte/2)*ki];
                    tr_ind = 1:env.n;
                    tr_ind(te_ind) = [];
                    data_tr = data;
                    data_te = data;
                    for i=1:env.Ncl
                        tr_ind_cl = tr_ind+env.n*(i-1);
                        te_ind_cl = te_ind+env.n*(i-1);
                        data_tr_cl= data(tr_ind_cl,:);
                        %[outs{i,1}, outs{i,3}] = iterativeMean(data_tr_cl(:,5));
                        outs{i,1} = MFCCmultipleMean(data_tr_cl(1:end/2,5));
                        outs{i,2} = data_tr_cl(1:end/2,5);
                        outs{i,3} = MFCCmultipleMean(data_tr_cl(end/2+1:end,5));
                        outs{i,4} = data_tr_cl(end/2+1:end,5);
                    end
                    out{ki} = outs;    
                    %data_te(tr_ind,:) = cell(length(tr_ind),size(data_te,2));
                end
                env.out{k_ind} = out;
            end
            clearvars i k k_ind ki Nte Ntr out outs te_ind te_ind_cl tr_ind ...
                tr_ind_cl data_te data_tr data_tr_cl;
            save(strcat('mat',env.slash,'median_MFCCs_computed_weight_',...
                num2str(weightMean),'.mat'),'env');
        else
            load(strcat('mat',env.slash,'median_MFCCs_computed_weight_',...
                num2str(weightMean),'.mat'));
        end
    end
else
    load(strcat('mat',env.slash,'median_MFCCs_computed_weight_',...
        num2str(weightMean),'.mat'));
end

% compute variance
env.computeVar = false;
if env.computeVar
    for k_ind=1:length(env.K)
        k = env.K(k_ind);
        for ki=1:k
            % will have 2 candidates MFCC and the variance
            % workVar = env.out{k_ind}{ki};
            % mean MFCC 1; MFCC 1; mean MFCC 2; MFCC 2
            %Ncl = size(workVar,1);
            for i=1:env.Ncl
                mean1 = env.out{k_ind}{ki}{i,1};
                mean2 = env.out{k_ind}{ki}{i,3};
                data1 = env.out{k_ind}{ki}{i,2};
                data2 = env.out{k_ind}{ki}{i,4};
                dtws = zeros(size(data1,1),2);
                for j = 1:size(data1,1)
                    [dtws(j,1), ~] = MFCCmatch_mex(mean1,data1{j});
                    [dtws(j,2), ~] = MFCCmatch_mex(mean2,data2{j});
                end
                meanDTW = mean(dtws,1);
                varDTW = var(dtws);
                env.out{k_ind}{ki}{i,4} = env.out{k_ind}{ki}{i,3};
                env.out{k_ind}{ki}(i,2:3) = {meanDTW(1), sqrt(varDTW(1))};
                env.out{k_ind}{ki}(i,5:6) = {meanDTW(2), sqrt(varDTW(2))};
            end
        end
    end
    clearvars i j k data1 data2 dtws k_ind ki mean1 mean2 meanDTW varDTW;
    save(strcat('mat',env.slash,'var_computed_weight_',...
                num2str(weightMean),'.mat'),'env');
else
    load(strcat('mat',env.slash,'var_computed_weight_',...
                num2str(weightMean),'.mat'));
end

env.predictMFCC = false;
if env.predictMFCC
    wrong = cell(length(env.K),1);
    for k_ind=1:length(env.K)
        k = env.K(k_ind);
        Nte = round(env.n/k);
        Ntr = env.n - Nte;
        wrong{k_ind} = cell(k,1);
        for ki=1:k
            % will have 2 candidates MFCC and the variance
            te_ind = [(Nte/2)*(ki-1)+1 : (Nte/2)*ki, ...
                env.n/2+(Nte/2)*(ki-1)+1 : env.n/2+(Nte/2)*ki];
            wrong{k_ind}{ki} = zeros(2,env.Ncl);
            te_ind_cl = zeros(Nte,env.Ncl);
            for i=1:env.Ncl
                te_ind_cl(:,i) = (te_ind+env.n*(i-1))';
            end
            ind_tr = 1:size(data,1);
            ind_tr(te_ind_cl(:)) = [];
            ind = 1:size(data,1);
            ind(ind_tr) = [];
            data_te = data(ind',:);
            for j=1:size(data_te,1)
                mfcc = data_te{j,5};
                p = predict_mex(mfcc, env.out{k_ind}{ki});
                data_te{j,7} = p;
                if p ~= data_te{j,4}
                    wrong{k_ind}{ki}(1,data_te{j,4}+1) = ...
                        wrong{k_ind}{ki}(1,data_te{j,4}+1)+1;
                end
                wrong{k_ind}{ki}(2,data_te{j,4}+1) = ...
                    wrong{k_ind}{ki}(2,data_te{j,4}+1)+1;
            end
            for i=1:env.Ncl
                disp(strcat('K=',int2str(k),', cl=',int2str(i-1),', ',num2str(...
                    round((wrong{k_ind}{ki}(2,i)-wrong{k_ind}{ki}(1,i))/...
                    wrong{k_ind}{ki}(2,i)*100)),'%, ki=',int2str(ki)));
            end
        end
    end
    clearvars data_te i ind ind_tr j k k_ind ki mfcc Nte Ntr p te_ind te_ind_cl;
    save(strcat('mat',env.slash,'accuracy_computed_weight_',...
                num2str(weightMean),'.mat'),'wrong');
else
    load(strcat('mat',env.slash,'accuracy_computed_weight_',...
                num2str(weightMean),'.mat'));
end

mean_errors = cell(length(env.K),1);
for k_ind=1:length(env.K)
    k = env.K(k_ind);
    mean_errors{k_ind} = zeros(env.Ncl,2);
    for j=1:k
        for i=1:env.Ncl
            mean_errors{k_ind}(i,1) = mean_errors{k_ind}(i,1) + ...
                wrong{k_ind}{j}(1,i);
            mean_errors{k_ind}(i,2) = mean_errors{k_ind}(i,2) + ...
                wrong{k_ind}{j}(2,i);
        end
    end
    mean_errors{k_ind} = mean_errors{k_ind}(:,1)./mean_errors{k_ind}(:,2);
    disp(strcat("mean accuracy for k=",int2str(k),": ",num2str(...
        mean(1-mean_errors{k_ind})*100),"%"));
end
accuracy = zeros(env.Ncl,1);
for i=1:env.Ncl
    errors = 0;
    tots = 0;
    for k_ind=1:length(env.K)
        k = env.K(k_ind);
        for ki=1:k
            errors = errors + wrong{k_ind}{ki}(1,i);
            tots = tots + wrong{k_ind}{ki}(2,i);
        end
    end
    accuracy(i) = (tots-errors)/tots;
end
clearvars errors i j k k_ind ki tots;
disp(strcat('mean accuracy=',num2str(mean(accuracy)*100),'%'));
save(strcat('mat',env.slash,'out-acc_',num2str(mean(accuracy)*100),...
    '.mat'),'env','wrong','accuracy','mean_errors','accuracy');
%{
% Computing DTW between all data
env.computeDTW = true;
if (env.computeDTW)
    dtw = cell(env.Ncl);
    path = cell(env.Ncl);
    tic;
    for j=1:env.Ncl
        for l=j:env.Ncl
            dtw{j,l} = zeros(Ntot);
            path{j,l} = cell(Ntot);
            for i=1:Ntot
                for k=i:Ntot
                    % dtw tra
                    % i-esimo elemento della j-esima classe e
                    % k-esimo elemento della l-esima classe
                    [dtw{j,l}(i,k), path{j,l}{i,k}] = ...
                        MFCCmatch_mex(data_tr{i,j},data_tr{k,l});
                end
                for k=i+1:Ntr
                    dtw{j,l}(k,i) = dtw{j,l}(i,k);
                    path{j,l}{k,i} = fliplr(path{j,l}{i,k});
                end
            end
            disp(strcat('class-',int2str(j),' : class-',int2str(l),' done'));
            toc;
        end
        for l=j+1:Ncl
            dtw{l,j} = dtw{j,l};
            path{l,j} = fliplr(path{j,l});
        end
        disp(strcat('class-',int2str(j),' done'));
        toc;
    end
    clearvars i j k l;
    save(strcat('mat',env.slash,'dtw.mat'),'dtw', 'path');
else
    load(strcat('mat',env.slash,'dtw.mat'));
end

perm = randperm(Ntot);
trained_ar = cell(length(env.K),1);
for k = K
    Nte = round(env.Ntot/k);
    Ntr = Ntot - Nte;
    trained = cell(k,1);
    for ki=1:k
        data_tr = cell(Ntr,Ncl);
        data_tr_ind = [Nte*(ki-1)+1, Nte*ki]
        data_tr = data{

%}