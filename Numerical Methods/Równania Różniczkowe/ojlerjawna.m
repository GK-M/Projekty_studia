clc
clear

h=1.5;
t=0:h:3;
xj=zeros(size(t));
xj(1)=1;
f = @(t,x) -x;

for i=1:length(t)-1

  xj(i+1)=xj(i)+h*f(t(i),xj(i));

end

disp(xj)
plot(t,xj,'o')