clear all;
close all;
format LONG;
%f = x-cosx-1%
%fp = 1+sinx%
%xj=xi-f/fp%
e=10^(-3);
h=1;
xi=1;
fp = @(x) 1+sin(x);
f = @(x) x-cos(x)-1;
while h>e
    xj=xi-f(xi)/fp(xi);
    h=abs(xi-xj);
    xi=xj;
end
disp(xi)
k=fzero(@(x) x-cos(x)-1,1);
disp(k)