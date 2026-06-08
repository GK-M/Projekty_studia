#include <stdio.h>
#include <stdlib.h>


typedef struct kolo{
double a,b,r;
}kolo;

int main()
{
    double x,y;
    struct kolo k;
    k.a = 1;
    k.b = 2;
    k.r = 4;
    double r2 = pow(k.r,2);
    printf("Podaj pierwsza wspolrzedna punktu: ");
    scanf("%lf",&x);
    printf("Podaj druga wspolrzedna punktu: ");
    scanf("%lf",&y);
    double rownanie;
    rownanie = pow((x-(k.a)),2)+pow((y-k.b),2);
    if(rownanie <= r2)
        {
            printf("Nalezy");
        }
    else{
        printf("Nie nalezy");
    }

}
