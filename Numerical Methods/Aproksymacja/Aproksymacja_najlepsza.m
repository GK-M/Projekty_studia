%aprosykacja 
clear
clc
st=3;
x = [1 2 3 4 5];
y = [2 9 8 5 6];
my=y';
mx=zeros(length(x),st+1);
for i=1:st+1
    mx(:,i)=x.^(i-1);
end 
A=inv(mx'*mx)*mx'*my;
x1=linspace(min(x)-1,max(x)+1,1000);
y1=0;
for i=1:st+1
    y1=y1+A(i)*x1.^(i-1);
end
figure;
plot(x,y,'o')   
hold on;
plot(x1,y1)
