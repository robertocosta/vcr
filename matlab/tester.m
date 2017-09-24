clear all; close all;
global env;
env.MFCCcompression = false;
env.reloadData = false;
env.os = getenv('OS');
env.computeDTW = false;
%% Voice command recognition
%%{
global commands;
addpath('lib');
%% READING AUDIO FILES (LABELED)
if (strcmp(env.os,'Windows_NT'))
    env.dirName = '..\dataset\';
    env.slash = '\';
else
    env.dirName = '../dataset/';
    env.slash = '/';
end
if (env.reloadData)
    d = dir(env.dirName);
    isub = [d(:).isdir]; %# returns logical vector
    nameFolds = {d(isub).name}';
    nameFolds(ismember(nameFolds,{'.','..'})) = [];
    commands = cell(size(nameFolds,1),1);
    for i=1:size(nameFolds,1)
        disp(strcat('comando: ',nameFolds{i}));
        fileList = getAllFiles(strcat(env.dirName,nameFolds{i}));
        audioFiles = cell(size(fileList,1),3);
        for j=1:size(fileList,1)
            [audioFiles{j,1}, audioFiles{j,2}] = audioread(fileList{j});
            audioFiles{j,3} = fileList{j};
        end
        commands{i}.description = nameFolds{i};
        commands{i}.audio = audioFiles;
    end
    clearvars audioFiles d dirName fileList i isub j nameFolds;
    save(strcat('mat',env.slash,'audio_loaded.mat'),'commands');
else
    load(strcat('mat',env.slash,'audio_loaded.mat'));
end

env.mfccComprThreshold = 1;
env.lpcN = 12;
env.mfccN = 12;
%% ENHANCING AUDIO
% performs speech enhancement using mmse estimate
addpath(strcat('voicebox',env.slash));
% for i=1:size(commands,1)
%     for j=1:size(commands{i}.audio,1)
%         row = commands{i}.audio(j,:);
%         commands{i}.audio{j,1} = ...
%             ssubmmsev(row{1}, row{2});
%     end
% end
%% FEATURES EXTRACTION FROM AUDIO
for i=1:size(commands,1)
    for j=1:size(commands{i}.audio,1)
        row = commands{i}.audio(j,:);
        [activeLevel, activityFactor] = activlev(row{1}, row{2});
        mfcc = melcepst(row{1}, row{2});
        %mfcc = melcepst(row{1}, row{2}, 'N');
        % mfcc compression
        if env.MFCCcompression
            l = size(mfcc,1);
            k = 1;
            while (k<l)
                if (norm(mfcc(k,:)-mfcc(k+1,:))<env.mfccComprThreshold)
                    mfcc(k,:) = (mfcc(k,:)+mfcc(k+1,:))./2;
                    mfcc(k+1,:) = [];
                end
                k = k+1;
                l = size(mfcc,1);
            end
        end
        % end of mfcc compression
        %commands{i}.features(j,1).activeLevel = activeLevel;
        %commands{i}.features(j,1).activityFactor = activityFactor;
        commands{i}.features(j,1).mfcc = mfcc;
        %commands{i}.features(j,1).desc = get_descriptor(mfcc,env.lpcN)';
    end
end
clearvars activeLevel activityFactor i j row mfcc k l;

%% K-FOLD CROSS VALIDATION: cross validation applied to all the procedure
%% SPLITTING DATA BETWEEN TRAINING AND TESTING
rng('default');
env.kfold = [5, 10];
Ntot = size(commands{1,1}.audio,1);
%for kfold_i=env.kfold
    % split_percent = 1-1/kfold_i; % in [0,1]
    % split_ratio * Ntr = Nte
    % split_ ratio  = Nte / Ntr = (1-split_percent) / split_percent
    Ntr = floor(split_percent*Ntot);
Nte = Ntot - Ntr;
ind = randperm(Ntot);
Ncl = length(commands);
data_tr = cell(Ntr,Ncl);
data_te = cell(Ntot-Ntr,Ncl);
for i=1:Ntr
    for j=1:Ncl
        data_tr{i,j} = commands{j}.features(ind(i)).mfcc;
    end
end
for i=Ntr+1:Ntot
    for j=1:Ncl
        data_te{i-Ntr,j} = commands{j}.features(ind(i)).mfcc;
    end
end
clearvars i j;
%%}
%% CALCULATING DTW AND OPTIMAL PATHS
%%{
%%}
% testing
%{
class1 = 1;
class2 = 2;
row1 = 2;
row2 = 16;
disp(strcat('from class-',int2str(class1),' to class-',int2str(class2)));
disp(strcat('L1=',int2str(size(data_tr{row1,class1},1)),...
    ',L2=',int2str(size(data_tr{row2,class2},1))));
[tmp1, tmp2] = MFCCmatch(data_tr{row1,class1},data_tr{row2,class2});
disp(strcat('from :',int2str(tmp2(1,1)),',',int2str(tmp2(1,2))));
disp(strcat(' to  :',int2str(tmp2(end,1)),',',int2str(tmp2(end,2))));
disp(strcat('DTW :',num2str(tmp1)));
class1 = 1;
class2 = 1;
row1 = 3;
row2 = 2;
disp(strcat('from class-',int2str(class1),' to class-',int2str(class2)));
disp(strcat('L1=',int2str(size(data_tr{row1,class1},1)),...
    ',L2=',int2str(size(data_tr{row2,class2},1))));
[tmp3, tmp4] = MFCCmatch(data_tr{row1,class1},data_tr{row2,class2});
disp(strcat('from :',int2str(tmp4(1,1)),',',int2str(tmp4(1,2))));
disp(strcat(' to  :',int2str(tmp4(end,1)),',',int2str(tmp4(end,2))));
disp(strcat('DTW :',num2str(tmp3)));
clearvars class1 class2 row1 row2;
%}
% end testing
%%{
if (env.computeDTW)
    dtw = cell(Ncl);
    path = cell(Ncl);
    tic;
    for j=1:Ncl
        for l=j:Ncl
            dtw{j,l} = zeros(Ntr);
            path{j,l} = cell(Ntr);
            for i=1:Ntr
                for k=i:Ntr
                    % dtw tra
                    % i-esimo elemento della j-esima classe e
                    % k-esimo elemento della l-esima classe
                    [dtw{j,l}(i,k), path{j,l}{i,k}] = ...
                        MFCCmatch(data_tr{i,j},data_tr{k,l});
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
%% TRAINING ALGORITHM
%% Inter class minimum and maximum DTW
% means = zeros(Ncl);
% variances = zeros(Ncl);
mins = zeros(Ncl);
maxs = zeros(Ncl);
for i=1:Ncl
    for j=1:Ncl
%         I = randperm(size(dtw{i,j},1));
%         means(i,j) = mean(mean(dtw{i,j}(I(1:env.nRansac),:),2));
%         variances(i,j) = var(var(dtw{i,j}(I(1:env.nRansac),:),0,2));
        mins(i,j) = min(dtw{i,j}(:));
        maxs(i,j) = max(dtw{i,j}(:));
    end
end
 %% Confidence Intervals
CI = zeros(Ncl,1);
for i=1:Ncl
    tmp = sort(mins(i,:));
    CI(i) = tmp(2);
end
env.CI = CI;
env.mins = mins;
env.maxs = maxs;
clearvars tmp i j CI mins maxs;

%% K-means
% Clustering algorithm to split one classes into 2 sub classes (2 speakers)
% Output: env.mediani, {Ncl x 2}: 2 MFCC sequences for each class
% Parameters setting
env.clusterThresh = 0.1;
% Algorithm
env.mediani = cell(Ncl,2);
for i=1:Ncl
    ind1 = 1;
    ind2 = size(dtw{i,i},1);
    mfcc1 = data_tr{ind1,i};
    mfcc2 = data_tr{ind2,i};
    stabilized = false;
    classification = false(ind2,1); % false if closer to mfcc2
    while (~stabilized)
        for j=1:length(classification)
            [d1, ~] = MFCCmatch(data_tr{j,i},mfcc1);
            [d2, ~] = MFCCmatch(data_tr{j,i},mfcc2);
            if d1<d2
                classification(j) = true;
            end
        end
        mfcc1new = MFCCmultipleMean(data_tr(classification,i));
        mfcc2new = MFCCmultipleMean(data_tr(~classification,i));
        [d1, ~] = MFCCmatch(mfcc1new,mfcc1);
        [d2, ~] = MFCCmatch(mfcc2new,mfcc2);
        stabilized = (d1<env.clusterThresh) && (d2<env.clusterThresh);
        mfcc2 = mfcc2new;
        mfcc1 = mfcc1new;
    end
	env.mediani{i,1} = mfcc1;
    env.mediani{i,2} = mfcc2;
    clearvars mfcc1new mfcc2new d1 d2 paths1 paths2 i j ind1 ...
        ind2 mfcc1 mfcc2 stabilized classification;
end

%% Median MFCC
% Output: env.medians, {Ncl x 1}: 1 MFCC sequence for each class
% Parameters setting
medians = cell(Ncl,Ncl,Ncl);
env.nRansac = uint8(Ntr);
r = rand(Ncl,1)*2; % [0,2]
r = r - 0.5; % [-0.5,1.5]
env.falseMatch = 1*ones(Ncl)+repmat(r,1,Ncl); %[0.5, 2.5]
r = rand(Ncl)./4;
env.AR = .75*ones(Ncl)+r;
env.normalize = true;
% Training Algorithm
wrong = zeros(Ncl);
for ar_ind = 1:Ncl
    ar = env.AR(ar_ind,:);
    for fm_ind = 1:Ncl
        fm = env.falseMatch(fm_ind,:);
        % Finding median MFCC
        for i=1:Ncl
            I = inf(size(dtw{i,i},1),4);
            %{
            I(:,1) :: indexes
            I(:,2) :: min DTW w.r.t. the other classes
            I(:,3) :: max DTW w.r.t. the same class
            I(:,4) :: min-max
            %}
            [I(:,3),I(:,1)] = sortrows(mean(dtw{i,i},2)); % I(:,3) must be small
            others = 1:Ncl;
            others(others==i)=[];
            for j=1:size(I,1)
                for k=1:Ncl-1 % I(:,2) must be large
                    I(j,2) = min([I(j,2), min(dtw{i,others(k)}(I(j,1),:))]);
                end
            end
            if (env.normalize)
                I(:,2) = I(:,2) / max(I(:,2));
                I(:,3) = I(:,3) / max(I(:,3));
            end
            I(:,4) = I(:,2)*fm(i)-I(:,3);
            I = sortrows(I,4);
            I = flipud(I);
            %[~, env.nRansac] = max(diff(I(:,4)));
            %env.nRansac = find(I(:,4)>mean(I(:,4)), 1, 'last' );
            I = I(:,1);
            med = cell(1);
            l = 0;
            k=1;
            while (length(I)>ceil(env.nRansac/2))
                tmp = dtw{i,i}(I(1),:); % contiene le DTW dell'elemento I(1) con tutti gli altri
                tmp(I(1)) = []; % toglie la DTW con se stesso
                while (1)
                    [~,ind] = min(tmp); % trova la DTW a distanza minima
                    if (~isempty(I(I==ind))) % se esiste esce dal ciclo
                        break;
                    end % altrimenti elimina
                    tmp(ind) = [];
                end
                % salva la media tra le 2 sequenze a distanza minima
                med{k} = MFCCmean(data_tr{I(1),i},data_tr{ind,i},path{i,i}{I(1),ind});
                k = k+1;
                % accumula le lunghezze delle MFCC per fare poi la media
                l = l + size(data_tr{I(1),i},1) + size(data_tr{ind,i},1);
                I(1) = [];
                I(I==ind) = [];
            end
            l = l / k / 2;
            medians{i,ar_ind,fm_ind} = med{1};
            for k=2:length(med)
                [~,p] = MFCCmatch(medians{i,ar_ind,fm_ind},med{k});
                medians{i,ar_ind,fm_ind} = MFCCmean(medians{i,ar_ind,fm_ind},med{k},p,ar(i));
                %medians{i} = MFCCreduce(medians{i},max([size(medians{i},1),size(med{k},1)]));
            end
            medians{i,ar_ind,fm_ind} = MFCCreduce(medians{i,ar_ind,fm_ind},l);
        end
        % Testing parameters ar and fm
        for i=1:Nte
            for j=1:Ncl
                tested = data_te{i,j};
                result = zeros(Ncl,1);
                for k=1:Ncl
                    [result(k), ~] = ...
                        MFCCmatch(tested,medians{k,ar_ind,fm_ind});
                end
                [~, minV] = min(result);
                if minV ~= j
                    wrong(ar_ind,fm_ind) = wrong(ar_ind,fm_ind)+1;
                end
            end
        end
    end
end
[arChoosen,fmChoosen] = find(wrong==min(wrong(:)));
env.AR = env.AR(arChoosen,:);
env.falseMatch = env.falseMatch(fmChoosen,:);
env.medians = medians(:,arChoosen,fmChoosen);
clearvars i j k l p tmp med I ind others r fm fm_ind ar ar_ind;

%% TESTING ALG.
classified = zeros(size(data_te));
wrong = zeros(1,Ncl);
for i=1:Nte
    for j=1:Ncl
        tested = data_te{i,j};
        %result = zeros(Ncl,1);
        result = zeros(size(env.medians,1),size(env.medians,2));
        for k=1:Ncl
            for l=1:size(env.medians,2)
                [result(k,l), ~] = MFCCmatch(tested,env.medians{k,l});
            end
        end

        res = find(result==min(result(:)));
        classified(i,j) = res;
        if (classified(i,j)~=j)
            %disp(strcat('error.{i,j}={',int2str(i),',',int2str(j),'}'));
            wrong(j) = wrong(j) + 1;
        end
    end
end
env.accuracy = (1-sum(wrong)/length(data_te(:)))*100;
env.wrong = wrong;
disp(strcat('accuracy=',num2str(env.accuracy),'%'));
env.classified = classified;


%% TESTING K-MEANS
classified = zeros(size(data_te));
wrong = zeros(1,Ncl);
for i=1:Nte
    for j=1:Ncl
        tested = data_te{i,j};
        %result = zeros(Ncl,1);
        result = zeros(size(env.mediani,1),size(env.mediani,2));
        
        for k=1:Ncl
            for l=1:size(env.mediani,2)
                [result(k,l), ~] = MFCCmatch(tested,env.mediani{k,l});
            end
        end

        minV = find(result==min(result(:)));
        meanRes = mean(result,2);
        [res, ~] = find(result==result(minV));
        if find(meanRes==min(meanRes))~= res
            disp(strcat('class-',int2str(j),':mean=',...
                int2str(find(meanRes==min(meanRes))),...
                ':min=',int2str(res),'?'));
        end
%{
        [v, res] = sort(result,1);
        if (v(1)<env.CI(res(1))) % I'm quite sure
            classified(i,j) = res(1);
        elseif (v(1)<env.maxs(res(1),res(1))) % I'm still confident
            classified(i,j) = res(1);
        else % better not to classify anyting
            classified(i,j) = inf;
        end
%}
        classified(i,j) = res;
        if (classified(i,j)~=j)
            %disp(strcat('error.{i,j}={',int2str(i),',',int2str(j),'}'));
            wrong(j) = wrong(j) + 1;
        end
    end
end
env.accuracy = (1-sum(wrong)/length(data_te(:)))*100;
env.wrong = wrong;
disp(strcat('accuracy=',num2str(env.accuracy),'%'));
env.classified = classified;

clearvars i j k res tested result v classified medians wrong;
save(strcat('out',env.slash,'acc_',num2str(env.accuracy),'_',...
    datestr(datetime('now'),'yy-mm-dd_HH-MM-SS'),'.mat'),'env');

