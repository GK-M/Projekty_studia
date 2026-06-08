clear all;
close all;
format LONG;
%xj,xi,xo  xj=fxi(xi-xo)/f(xi)-f(xo)%
e=10^(-3);
h=1;
xi=1;
xo=2;
f = @(x) x-cos(x)-1;
while h>e
    l1 = f(xi)*(xi-xo);
    m1 = f(xi)-f(xo);
    xj = xi-(l1/m1);
    h = abs(xj-xi);
    xo=xi;
    xi=xj;
end
disp(xi)
k=fzero(@(x) x-cos(x)-1,1);
disp(k)
