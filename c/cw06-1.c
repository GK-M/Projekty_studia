#include <stdio.h>
#include <stdlib.h>


double silnia(int n){
        if(n<2){
            return 1;
        }
        else{
            return n*silnia(n-1);
        }
}
int main()
{
    int n;
    scanf("%d",&n);
    double wynik = silnia(n);
    printf("%lf", wynik);
}
