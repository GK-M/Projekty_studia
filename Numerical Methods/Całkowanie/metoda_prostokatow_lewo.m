clear
clc
format long ;
f = @(x) sin(x);
a = 0;
b = pi;
n = 100; 
h = (b - a) / n;
I = 0;
x = linspace(a,b,n);
y = sin(x);
for i = 1:n
    xn = a + (i - 1) * h; 
    I = I + f(xn)*h;
end
disp('Wynik całkowania numerycznego metodą prostokątów z lewej strony:');
disp(I)
figure;
bar(x, y,'histc');
title('Wynik całkowania numerycznego metodą prostokątów z lewej strony:');
xlabel('oś x');
ylabel('oś y');
grid on;

