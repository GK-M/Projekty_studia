clear
clc
format long;
f =@ (x) sin(x);  
a = 0; 
b = pi;  
n = 1000;
h = (b-a)/n;
f0 = f(a); 
fk = f(b); 
I = 0;
x=linspace(a,b,n);
y=f(x);
for i = 2:n-1
    xn=a+i*h;
    I = I + 2*f(xn); 
end

T = (h/2)*(f0 + I + fk);

disp('Wynik całkowania numerycznego metodą trapezow:');
disp(T);
figure;
bar(x,y,'histc')




