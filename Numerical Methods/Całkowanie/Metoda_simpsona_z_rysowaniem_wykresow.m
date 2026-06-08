clear;
clc;
format long e;
f = @(x) sin(x);
a = 0;
b = pi;
n = 100;
h = (b - a) / n;
I = 0;

% Inicjalizacja wektorów do przechowywania punktów parabol
x_parabol = [];
y_parabol = [];

for i = 1:n
    x1 = a + (i - 1) * h;  % Lewa strona i-tego przedziału
    x3 = a + i * h;      % Prawa strona i-tego przedziału
    x2 = (x1 + x3) / 2; % Środek i-tego przedziału
    
    % Dodanie punktów paraboli do wektorów
    x_parabol_i = linspace(x1, x3, 100);
    y_parabol_i = f(x1) + (4*f(x2) - 2*f(x1) + 4*f(x3)) / (6*h^2) * (x_parabol_i - x2).^2;
    
    x_parabol = [x_parabol, x_parabol_i];
    y_parabol = [y_parabol, y_parabol_i];
    
    I = I + h/6 * (f(x1) + 4*f(x2) + f(x3));
end

% Wyświetlenie wyniku
fprintf('Wartość całki numerycznej (metoda Simpsona): %.4f\n', I);

% Narysowanie wykresu parabol
figure;
plot(x_parabol, y_parabol, 'LineWidth', 2);
title('Parabole używane w metodzie Simpsona');
xlabel('x');
ylabel('y');
grid on;

