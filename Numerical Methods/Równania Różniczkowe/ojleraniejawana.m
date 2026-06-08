    clear
    clc
format short;
    f = @(t,x) -x;
h=1.5;
t=[0:h:3];
xn=zeros(size(t));
xn(1)=1;

for i=1:length(t)-1

  xn(i+1)= xn(i)/(h+1);

end
hold on;
disp(xn)
plot(t,xn,'o')