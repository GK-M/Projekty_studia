clc
clear 
%dane
V = 3;
m = 100;
mp = 100;
T = 0.01;
L=0.1; 
R=0.4; 
J=0.2; 
D=1; 
km=5; 
ke=2; 
r=0.2; 
B=5; 
k=700000; 
g=9.81; 
Tp=0.01;
%---------------------------------------------%

G_beben = tf([1],[(J/r^2+mp) (D/r^2) k]);
G_winda = tf([1],[m B k]);
G_silnik = tf([1],[L R]);
G_k = tf([k],[1]);
G_km = tf([km/r],[1]);
G_ke = tf([ke/r 0],[1]);
G1 = series(G_beben,G_k);
G1 = series(G1,G_winda);
G1 = feedback(G1,G_k,1);
G1 = series(G1,G_km);
G1 = series(G1,G_silnik);
G2 = series(G_ke,1/G_k);
G2 = series(G2,1/G_winda);
G1 = feedback(G1,G2,-1);
[Lc,Mc] = tfdata(G1,'v');
Gc=tf(Lc,Mc) %transmitancja ciągła
[Ld,Md] = c2dm(Lc,Mc,Tp,'zoh');


%---------------------------------------------%
Kkr=38;
Tosc=2.160;
Kp=0.6*Kkr*(1-Tp/Tosc)
%Kp=52;
Ti=Tp*0.5*(Tosc/Tp-1)
%Ti=0;
Td=Tp*0.125*(Tosc/Tp)^2/(Tosc/Tp-1)
%Td=0;
%---------------------------------------------%
%Transmitancja części elektrycznej silnika
Lse=[1];
Mse=[L R];
Gse=tf(Lse,Mse);
Gsed=c2d(Gse,Tp,'zoh');

%Transmitancja części mechanicznej silnika
Lsm=[1];
Msm=[J D];
Gsm=tf(Lsm,Msm);
Gsmd=c2d(Gsm,Tp,'zoh');

%Transmitancja windy
Lw=[k];
Mw=[m B k];
Gw=tf(Lw,Mw);
Gwd=c2d(Gw,Tp,'zoh');

%całk
c=tf(1,[1 0]);

%Transmitacja zastępcza
W=1-k*r*r*Gsm*c*(Gw-1)+km*ke*Gse*Gsm;
WE2=Gse*km;
E2=WE2/W;
Gc2=E2*Gsm*c*r*Gw;
Gc2d=c2d(Gc2,Tp,'zoh');
[Lod, Mod]=tfdata(Gc2d);
Lod=cell2mat(Lod);
Mod=cell2mat(Mod);
%Dobór nastaw czasooptymalnego
L1=(Lod(1)+Lod(2)+Lod(3)+Lod(4)+Lod(5)+Lod(6)+Lod(7)+Lod(8)+Lod(9)+Lod(10)+Lod(11));
no=10;
Lco=Mod;
Mco=[L1 0 0 0 0 0 0 0 0 0 0];
Mco=Mco-Lod;
Gco=tf(Lco,Mco,Tp)


