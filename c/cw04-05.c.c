#include <stdio.h>
#include <math.h>
int pierwiastki(float a, float b, float c);
int main()
{
    int wybor;
    do
    {
        float a, b, c;
        printf("podaj wartość współczynnika a:\n");
        scanf("%f", &a);
        printf("podaj wartość współczynnika b:\n");
        scanf("%f", &b);
        printf("podaj wartość współczynnika c:\n");
        scanf("%f", &c);
        pierwiastki(a, b, c);
        printf("napisz 1, aby kontynuować, 0 aby wyjść\n");
        scanf("%i", &wybor);
        
    } while(wybor == 1);
    
}
/* Funkcja licząca pierwiastki równania kwadratowego*/
int pierwiastki(float a, float b, float c)
{ 
    float d;
    d=pow(b, 2.0)-4.0 * a * c;
    /* Jeśli delta <0 -brak pierwiastków*/
    if (d < 0)
   {
       printf("brak pierwiastków \n");
       return 0;
   }
   /*Jeśli delta = 0, to jest jeden pierwiastek*/
   else if (d == 0)
   {
       float x1;
       x1 = -(b / (2.0 * a));
       printf("pierwiastek równania: %.2f\n", x1);
       return 0;
   }
   /*Jeśli delta < 0, to są dwa pierwiastki*/
   else 
   {
       float x1, x2;
       float pierwiastekd;
       pierwiastekd = pow(d, 0.5);
       x1 = (-b - pierwiastekd) / (2.0 * a);
       x2 = (- b + pierwiastekd) / (2.0 * a);
       printf("pierwiastki równania: %.2f %.2f \n", x1, x2);
       return 0;
   }
}