clear
clc
close
x = [1 2 3 4 5];
y = [2 9 8 5 6];
xn=linspace(min(x),max(x),1000);
yn=interp1(x,y,xn,'spline');
plot(xn,yn,'o')