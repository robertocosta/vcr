function [ mfcc ] = MFCCmulMean( mfccAr, n )
%MFCCmultipleMean Computes the avg between all MFCC in cell array mfccAr
%   Takes the two closest elements, do the mean, iterate
mfccAr = mfccAr(1:n);
while (n>2)
    dtw = zeros(n);
    path = cell(n);
    tic;
    for i=1:n
        for j=i:n
            [dtw(i,j), path{i,j}] = MFCCmatch(mfccAr{i},mfccAr{j});
            dtw(j,i) = inf;
            path{j,i} = fliplr(path{i,j});
            %disp(strcat('class-',int2str(i),' : class-',int2str(j),' done'));
            %toc;
        end
    end
    toc;
    %clearvars i j;
    minInd = zeros(n,1);
    minDtw = zeros(n,1);
    tmp = zeros(n);
    tmp((n+1)*(0:n-1)+1) = inf;
    dtw = dtw + tmp;
    for i=1:n
        [minDtw(i), minInd(i)] = min(dtw(i,:));
    end
    mins = horzcat(minInd,minDtw);
    [mins_sorted, indexes] = sortrows(mins,2,'ascend');
    mins_sorted = horzcat(indexes,mins_sorted);
    mfccMeanClosest = MFCCmean(mfccAr{mins_sorted(1,1)},...
        mfccAr{mins_sorted(1,2)},path{mins_sorted(1,1),mins_sorted(1,2)});
    mfccAr{mins_sorted(1,1)} = mfccMeanClosest;
    mfccAr(mins_sorted(1,2)) = [];
    n = size(mfccAr,1);
end
%clearvars tmp i j;
[~, path] = MFCCmatch(mfccAr{1},mfccAr{2});
mfcc = MFCCmean(mfccAr{1}, mfccAr{2},path);