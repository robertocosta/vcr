function classe = predict(mfcc1,mfccTab)
%PREDICT Summary of this function goes here
%   Detailed explanation goes here
    %mfccNew = cell(size(mfccTab,1),3);
    mfccTabNew = cell(size(mfccTab,1),size(mfccTab,2)+7);
    for i=1:10
        for j=1:6
            mfccTabNew{i,j}=mfccTab{i,j};
        end
    end
    mfccTab = mfccTabNew;
    for i=1:size(mfccTab,1)
        mfccTab{i,8} = MFCCmatch(mfcc1,mfccTab{i,1}); % dtw wrt sp 1
        mfccTab{i,9} = MFCCmatch(mfcc1,mfccTab{i,4}); % dtw wrt sp 2
        % 10: dtw between sp1 and sp2
        % 12: mean MFCC between sp1 and sp2
        % 13: dtw wrt mean MFCC 
        [mfccTab{i,10}, mfccTab{i,11}] = MFCCmatch(mfccTab{i,1},mfccTab{i,4});
        mfccTab{i,12} = MFCCmean(mfccTab{i,1},mfccTab{i,4},mfccTab{i,11});
        mfccTab{i,13} = MFCCmatch(mfcc1,mfccTab{i,12});
    end
    tmp = zeros(size(mfccTab,1),1);
    for i=1:size(mfccTab,1)
        tmp(i) = mfccTab{i,8};
    end
    [rows1, sp1] = sortrows(tmp);
    %rows1 = rows1(1:2,[8,2,3]);
    sp1 = sp1(1);
    tmp = zeros(size(mfccTab,1),1);
    for i=1:size(mfccTab,1)
        tmp(i) = mfccTab{i,9};
    end
    [rows2, sp2] = sortrows(tmp);
    sp2 = sp2(1);
    for i=1:size(mfccTab,1)
        tmp(i) = mfccTab{i,13};
    end
    %rows2 = rows2(1:2,[9,5,6]);
    %[~, sp3] = sortrows(mfccTab{:,13});
    %sp3 = sp3(1);
    %rows3 = rows3(1:2,12);
    %[~, sp3] = sortrows(horzcat(mfccTab,mfccNew{:,1}),7);
    %if rows1(1,3)<rows2(1,3)
    if rows1(1)<rows2(1)
        classe = sp1-1;
    else
        classe = sp2-1;
    end
    if 
    %{
    if rows1{1,2}<rows2{1,2}
        if rows1{1,1} < rows1{1,2}+rows1{1,3}
            classe = sp1;
        else
            if rows2{1,1} < rows2{1,2}+rows2{1,3}
                classe = sp2;
            else
                classe = sp3(1);
            end
        end
    else
        if rows2{1,1} < rows2{1,2}+rows2{1,3}
            classe = sp2;
        else
            if rows1{1,1} < rows1{1,2}+rows1{1,3}
                classe = sp1;
            else
                classe = sp3;
            end
        end
    end
    %}
end

