function [ o ] = MFCCreduce( P,n )
    x = zeros(1,size(P,1));
    x(1) = norm(P(1,:));
    for i=2:size(P,1)
        x(i) = norm(P(i,:)-P(i-1,:))+x(i-1);
    end
    xNew = linspace(x(1),x(end),n);
    pp = csaps(x,P',[],xNew);
    o = pp';
%     
%     x = (1:10)';
%     noisy = [3.01,4.1,4.99,6.1,5,4,3,4.001,5,6];
%     x2 = (1:100)/10;
%     y = csaps(x,noisy,[],x2);
%     figure;
%     hold on;
%     plot(x,noisy);
%     plot(x2,y);
%     hold off;
end

