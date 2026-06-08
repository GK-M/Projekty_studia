#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void wywolanie(double a,double b,char znak,double wynik)
{
printf("%lf %c %lf = %lf\n",a,znak,b,wynik);
}
int main()
{
    int stan = 1;
    while(stan!=0){
    double a,b,wynik;
    char znak;
    printf("Dostepne operacje:\n");
    printf("Podaj liczbe\n");
    scanf("%lf",&a);
    printf("Podaj znak\n");
    scanf(" %c",&znak);
    printf("Podaj liczbe\n");
    scanf("%lf",&b);
    switch(znak){
    case '+':
        wynik = a+b;
    break;
    case '-':
        wynik = a-b;
    break;
    case '*':
        wynik = a*b;
    break;
    case '/':
        if(b!=0){wynik = a/b;}
    break;
    case '^':
        wynik=a;
        for(int i = 1;i<b;i++){
        wynik*=a;
        }
    default:
    printf("Blad!\n");
    continue;
    }
    wywolanie(a,b,znak,wynik);
}
}
