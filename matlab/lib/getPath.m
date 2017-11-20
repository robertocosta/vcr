function p = getPath( D )
    x = size(D,2);
    y = size(D,1);
    p=0;
    if ((x==1)&&(y==1))
        p = [1,1];
    elseif (x==1)
        p = [1,1;1,y-1];
    elseif (y==1)
        p = [1,1;x-1,1];
    else
        [~, minI] = min([D(y-1,x-1), D(y,x-1), D(y-1,x)]);
        if (length(minI)>1)
            minI = minI(1);
        end
        switch (minI)
            case 1
                p = vertcat(getPath(D(1:y-1,1:x-1)),[x,y]);
            case 2
                p = vertcat(getPath(D(1:y,1:x-1)),[x,y]);
            case 3
                p = vertcat(getPath(D(1:y-1,1:x)),[x,y]);
            otherwise
                disp('error');
        end
    end
end

