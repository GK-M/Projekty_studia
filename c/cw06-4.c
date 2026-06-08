#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int x = rand()%2001;
    printf("%d\n",x);
    int tab[2000];
    for (int i = 0; i<=2000;i++){
        tab[i] = i;
    }
    int proby = 0;
    int l = 0;
    int p = sizeof(tab)/sizeof(tab[0]);
    int sr;
    while(l<=p)
    {
        proby++;
        sr = (l+p)/2;
        printf("%d. Zgadywana: %d\n", proby, tab[sr]);
        if(tab[sr]==x)
            {
                printf("Gratulacje wynik to: %d\n", x);
                printf("Odgadnieto w %d probach", proby);
                return 0;
            }
        if(tab[sr]>x)
            p = sr -1;
        else
            l = sr+1;
    }
}
