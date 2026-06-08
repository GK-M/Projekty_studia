%Interpolacja 
clear
clc
close
x = [1 2 3 4 5];
y = [2 9 8 5 6];
mx=zeros(length(x),length(x));
for i=1:length(x)
    mx(:,i)=x.^(i-1);
end
A=inv(mx)*y';
xn=linspace(min(x),max(x),1000);
yn=0;
for i=1:length(y)
    yn=yn+A(i)*xn.^(i-1);
end
figure;
plot(x,y,'o')
hold on;
plot(xn,yn,'.')
hold on;
yi=interp1(x,y,xn,"spline");
plot(xn,yi)
legend('PUNKTY','INTERPOLACJA','INTERPOLACJA WBUDOWANA')