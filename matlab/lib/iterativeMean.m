function [mfcc1,mfcc2] = iterativeMean(cell_ar)
%ITERATIVEMEAN Summary of this function goes here
%   Detailed explanation goes here
    ind1 = 1;
    ind2 = size(cell_ar,1);
    mfcc1 = cell_ar{ind1,5};
    mfcc2 = cell_ar{ind2,5};
    stabilized = false;
    classification = false(ind2,1); % false if closer to mfcc2
    while (~stabilized)
        for j=1:length(classification)
            [d1, ~] = MFCCmatch_mex(cell_ar{j,5},mfcc1);
            [d2, ~] = MFCCmatch_mex(cell_ar{j,5},mfcc2);
            if d1<d2
                classification(j) = true;
            end
        end
        mfcc1new = MFCCmultipleMean(cell_ar(classification,5));
        mfcc2new = MFCCmultipleMean(cell_ar(~classification,5));
        [d1, ~] = MFCCmatch_mex(mfcc1new,mfcc1);
        [d2, ~] = MFCCmatch_mex(mfcc2new,mfcc2);
        stabilized = (d1<env.clusterThresh) && (d2<env.clusterThresh);
        mfcc2 = mfcc2new;
        mfcc1 = mfcc1new;
    end
    clearvars mfcc1new mfcc2new d1 d2 paths1 paths2 i j ind1 ...
        ind2 stabilized classification;
end

