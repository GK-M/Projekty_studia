
clear
clc
f=@(x)sin(x);
a=0;
b=pi;
n=100;
h=(b-a)/n;
x=linspace(a,b,n);% Ważne %
y=f(x);% Ważne %
I=0;
for i=1:n
    xn=a+h*i;
    I=I+h*f(xn-h/2);
end
disp('Wynik całkowanie metodą prostokątów z środka:')
disp(I)
figure;
bar(x, y,'histc');% Ważne %
title("całkowanie metodą prostokątów z środka:");
xlabel("oś x");
ylabel("oś y");
grid on;
