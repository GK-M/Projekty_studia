%aprosymacja wybudowana
clear
clc
close
st=3;
h=0.005;
x = [1 2 3 4 5];
y = [2 9 8 5 6];
p=polyfit(x,y,st);
xw=(min(x):h:max(x));
yw=polyval(p,xw);
plot(xw,yw,'o')