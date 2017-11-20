function [ dist, path ] = MFCCmatch( P,Q )
    %global C;
    x = size(P,1);
    y = size(Q,1);

%     if (y>x)
%         [ dist, path ] = match2(Q,P);
%         for i=1:size(path,1)
%             for j=1:size(path,2)
%                 path{i,j} = fliplr(path{i,j});
%             end
%         end
%         dist = dist';
%         return
%     end

    C = costs(P,Q);
    D = zeros(x,y);
    D(1,1) = C(1,1);
    for i=2:x
        D(i,1) = D(i-1,1)+C(i,1);
    end
    for i=2:y
        D(1,i) = D(1,i-1)+C(1,i);
    end
    for i=2:x
        for j=2:y
            D(i,j) = min([D(i-1,j-1),D(i-1,j),D(i,j-1)])+C(i,j);
        end
    end
    dist = D(x,y);
    %dist = D;
    path = getPath(D');    
end

