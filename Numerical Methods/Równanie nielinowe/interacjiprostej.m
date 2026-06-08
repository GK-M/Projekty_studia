close all;
clear all;
format LONG;
%bład
e=10^(-3);
%x=cos(x)+1;%
xi=1;
f = @(xi) cos(xi)+1;
h=1;
while h>e 
    xj=cos(xi)+1;
    h=abs(xj-xi);
    xi=xj;
end
disp(xi)
X=fzero(@(xi) xi-cos(xi)-1,1);
disp(X)