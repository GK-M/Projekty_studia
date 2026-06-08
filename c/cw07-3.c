#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct punkt{

    double x,y;
} punkt;


int main()
{
    double suma, pierwiastek;
    struct punkt pkt1;
    struct punkt pkt2;
    printf("x punktu 1: ");
    scanf("%lf",&pkt1.x);
    printf("y punktu 1: ");
    scanf("%lf",&pkt1.y);
    printf("pkt1(%lf,%lf)\n",pkt1.x,pkt1.y);
    printf("x punktu 2: ");
    scanf("%lf",&pkt2.x);
    printf("y punktu 2: ");
    scanf("%lf",&pkt2.y);
    printf("pkt2(%lf,%lf)\n",pkt2.x,pkt2.y);
    suma = pow((pkt2.x-pkt1.x),2) + pow((pkt2.y-pkt1.y),2);
    pierwiastek = sqrt(suma);
    printf("Odleglosc: %lf",pierwiastek);
}
