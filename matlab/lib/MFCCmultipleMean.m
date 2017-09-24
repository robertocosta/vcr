function [ mfcc ] = MFCCmultipleMean( mfccAr )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
maxLength = 0;
for i=1:size(mfccAr,1)
    if maxLength<size(mfccAr{i},1)
        maxLength = size(mfccAr{i},1);
    end
end
for i=1:size(mfccAr,1)
    mfccAr{i} = MFCCreduce(mfccAr{i},maxLength);
end
mfcc3 = zeros(size(mfccAr{i},1),size(mfccAr{i},2),length(mfccAr));
for i=1:size(mfcc3,3)
        mfcc3(:,:,i) = mfccAr{i};
end
mfcc = mean(mfcc3,3);
end

