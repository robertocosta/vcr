function [ m ] = MFCCmean( P,Q,path,w )
    if (nargin<4)
        w = 0.5;
    end
    m = zeros(size(path,1),size(P,2));
    for i=1:size(path,1)
        m(i,:) = w*P(path(i,1),:)+(1-w)*Q(path(i,2),:);
    end
end

