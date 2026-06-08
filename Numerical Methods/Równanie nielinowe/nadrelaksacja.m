close all;
clear all;
format LONG;
%a=-g(x) = sin(x)%
%xj=(axi+g(xi))/(1+a);%
xi=1;
e=10^(-3);
f = @(x) cos(x)+1;
a = @(x) sin(x);
h=1;
 while h>e
    xj = (a(xi)*xi + f(xi))/(1 + a(xi));
    h=abs(xj-xi);
    xi=xj;
end
disp(xi)
X=fzero(@(x) x-cos(x)-1,1);
disp(X)