clear
clc
format long;
f = @(x) sin(x);
a = 0;
b = pi;
n = 100;
h = (b - a) / n;
I = 0;
for i = 1:n
    x1 = a + (i - 1) * h;  % Lewa strona i-tego przedziału
    x3 = a + i * h;      % Prawa strona i-tego przedziału
    x2 = (x1 + x3) / 2; % Środek i-tego przedziału
    
    I = I + h/6 * (f(x1) + 4*f(x2) + f(x3));
end
disp(I)

