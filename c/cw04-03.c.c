
#include <stdio.h>
#include <math.h>

int main()
{
   double a, b, c, d;
   a = -2;
   b = 4;
   c = -2;
   /* Liczymy deltę */
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
       double x1;
       x1 = -(b / (2.0 * a));
       printf("pierwiastek równania: %.2f\n", x1);
       return 0;
   }
   /*Jeśli delta < 0, to są dwa pierwiastki*/
   else 
   {
       double x1, x2;
       double pierwiastekd;
       pierwiastekd = pow(d, 0.5);
       x1 = (-b - pierwiastekd) / (2.0 * a);
       x2 = (- b + pierwiastekd) / (2.0 * a);
       printf("pierwiastki równania: %.2f %.2f \n", x1, x2);
       return 0;
       
   }
   return 1;

}
