%Metoda Bisekcji 
clear all;
close all;
format LONG;
f = @(x) x-cos(x)-1; 
e=10^(-3);
h=1;
a=0;
b=2;
s=(a+b)/2;
while h>e
s1=s;
if f(s)<0
a=s;
else 
b=s;
end
s=(a+b)/2;
h=abs(f(s)-f(s1));
end
tekst=strcat([num2str(s),' miejsce zerowe']);
disp(tekst)
X = fzero(@(x) x-cos(x)-1, 1);
disp(X)