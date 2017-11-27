function classe = predict(mfcc1,mfccTab)
%PREDICT Summary of this function goes here
%   Detailed explanation goes here
    %mfccNew = cell(size(mfccTab,1),3);
    for i=1:size(mfccTab,1)
        mfccTab{i,8} = MFCCmatch_mex(mfcc1,mfccTab{i,1});
        mfccTab{i,9} = MFCCmatch_mex(mfcc1,mfccTab{i,4});
        [mfccTab{i,10}, mfccTab{i,11}] = MFCCmatch_mex(mfccTab{i,1},mfccTab{i,4});
        mfccTab{i,12} = MFCCmean(mfccTab{i,1},mfccTab{i,4},mfccTab{i,11});
        mfccTab{i,13} = MFCCmatch_mex(mfcc1,mfccTab{i,12});
    end
    [rows1, sp1] = sortrows(mfccTab,8);
    rows1 = rows1(1:2,[8,2,3]);
    sp1 = sp1(1);
    [rows2, sp2] = sortrows(mfccTab,9);
    sp2 = sp2(1);
    rows2 = rows2(1:2,[9,5,6]);
    [~, sp3] = sortrows(mfccTab,13);
    sp3 = sp3(1);
    %rows3 = rows3(1:2,12);
    %[~, sp3] = sortrows(horzcat(mfccTab,mfccNew{:,1}),7);
    %if rows1(1,3)<rows2(1,3)
    if rows1{1,1}<rows2{1,1}
        classe = sp1-1;
    else
        classe = sp2-1;
    end
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

