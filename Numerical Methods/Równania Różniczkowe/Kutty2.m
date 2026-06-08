clc
clear
format long;
h=1;
t=[0:h:3];
xk=zeros(size(t));
xk(1)=1;
f = @(t,x) -x;

for i=1:length(t)-1

  k1 = h*f(t(i),xk(i));
  k2 = h*f(t(i)+h,xk(i)+k1);

  xk(i+1)= xk(i)+0.5*(k1+k2);

end

disp(xk)
plot(t,xk,'.')
