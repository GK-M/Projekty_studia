#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double prostokat(double a, double b)
{
    return a*b;
}
double kolo(double r)
{
    double pi = (double)22/(double)7;
    return (r*r)*pi;
}
double trojkat(double a, double b, double c)
{
    double wynik;
    double p = (double)(a+b+c)/(double)2;
    wynik = p*(p-a)*(p-b)*(p-c);
    return sqrt(wynik);
}

int main()
{
    int stan = 1;
    while(stan != 0)
    {
        int buf;
        printf("Co chcesz obliczyc\n");
        printf("1. Prostokat\n");
        printf("2. Kolo\n");
        printf("3. Trojkat\n");
        printf("4. Koniec?\n");
        int funk;
        printf("Twoj wybor: ");
        scanf("%d",&funk);
        double a,b,c,wynik;
        switch(funk)
        {

        case 1:
            printf("Podaj a: ");
            scanf("%lf", &a);
            printf("Podaj b: ");
            scanf("%lf", &b);
            wynik = prostokat(a,b);
        break;
        case 2:
            printf("Podaj r: ");
            scanf("%lf", &a);
            wynik = kolo(a);
        break;
        case 3:
            printf("Podaj a: ");
            scanf("%lf",&a);
            printf("Podaj b: ");
            scanf("%lf",&b);
            printf("Podaj c: ");
            scanf("%lf",&c);
            wynik = trojkat(a,b,c);
        break;
        case 4:
            stan = 0;
        break;
        default:
            system("cls");
            printf("Prosze podac opcje z menu!\n");
        }
        system("cls");
        printf("\nWynik: %lf\n\n",wynik);
    }
    return 0;
}
