clear
close
clc
format long;
f=@(t,x) -x;
h=1;
t=0:h:3;
xj=zeros(size(t));
xj(1)=1;
for i=1:length(t)-1
    k1=h*f(t(i),xj(i));
    k2=h*f(t(i)+h/2,xj(i)+k1/2);
    k3=h*f(t(i)+h/2,xj(i)+k2/2);
    k4=h*f(t(i)+h,xj(i)+k3);
    xj(i+1)=xj(i)+(1/6)*(k1+2*k2+2*k3+k4);
end
disp(xj)
figure;
plot(t,xj,'o')
hold on;
[b,c]=ode45(f,[0 3],1);
plot(b,c)