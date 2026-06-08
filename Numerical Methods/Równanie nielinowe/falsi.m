format LONG;
e=10^(-3);
h=1;
a=0;
b=2;
f = @(x) x-cos(x)-1;
l1 = a*f(b) - b*f(a);
m1 = f(b) - f(a);
xi = l1/m1;
while h>e
    if f(a)*f(xi)<0
l2=xi*f(a)-a*f(xi);
m2=f(a)-f(xi);
xj=l2/m2;
    else f(b)*f(xi)<0
l2=xi*f(b)-b*f(xi);
m2=f(b)-f(xi);
xj=l2/m2;
    end
h=abs(xi-xj);
xi=xj;
end
disp(xj)