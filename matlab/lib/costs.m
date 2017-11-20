function [ c ] = costs( P,Q )

    x = size(P,1);
    y = size(Q,1);
    c = zeros(x,y);
    for i=1:x
        for j=1:y
            c(i,j)=norm(P(i,:)-Q(j,:));
        end
    end

end

