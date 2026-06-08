clear
clc
format long;
f = @(x) sin(x);
a = 0;
b = pi;
n= 100;
h = (b - a) / n;
% Inicjalizacja wektorów do przechowywania wartości x, y (wysokość prostokątów)
x = linspace(a, b, n);
y = sin(x);
I=0;
for i=1:n
    xn=a+h*i;
    I=I+h*f(xn);
end
disp('Wynik całkowania numerycznego metodą prostokątówz prawej strony:')
disp(I);
figure;
bar(x, y, 'histc');
title('Metoda prostokątów');
xlabel('x');
ylabel('y');
grid on;
