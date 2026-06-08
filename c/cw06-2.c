#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i=0;
    float tab[100000];
    FILE *plik = fopen("liczby.txt","r");
    while(fscanf(plik,"%f\n",&tab[i])!=EOF){
        i++;
    }
    float suma=0;
    for(int j=0;j<i;j++){
        suma = suma+tab[j];
    }
    float iloczyn = 1;
    for(int j=0;j<i;j++){
        iloczyn *= tab[j];
    }
    float wykladnik = 1/(float)i;
    printf("Suma %f\n",suma);
    printf("Srednia arytmetyczna %f\n",(suma/i));
    printf("Geometryczna %lf",pow(iloczyn,wykladnik));
    //printf("%f",pow(suma,(1/i)));

}
