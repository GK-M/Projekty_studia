#include <stdio.h>
#include <stdlib.h>
/*void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}*/
void bubbleSortR(int tab[], int z)
{
    int i, j, temp;
    for (i = 0; i < z - 1; i++)

        for (j = 0; j < z - i - 1; j++)
            if (tab[j] > tab[j + 1]){
                ttab[j] = temp;
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }

}
void bubbleSortM(int tab[], int z)
{
    int i, j, temp;
    for (i = 0; i < z - 1; i++)

        for (j = 0; j < z - i - 1; j++)
            if (tab[j] < tab[j + 1])
                swap(&tab[j], &tab[j + 1]);
}
int main()
{
    FILE *plik = fopen("liczby.txt","r");
    int z,c;
    while(fscanf(plik,"%d\n",&c)!=EOF)
    {
        z++;
    }
    fclose(plik);
    fopen("liczby.txt","r");
    int tab[z];
    c = 0;
    int j = 0;
    while(fscanf(plik,"%d\n",&c)!=EOF)
    {
        tab[j]=c;
        j++;
    }
    printf("Nieposortowana\n");
    for(int i=0;i<=(sizeof(tab)/sizeof(*tab)-1); i++)
    {
        printf("%d\n",tab[i]);
    }
    printf("Posortowana rosnaco:\n");

    bubbleSortR(tab,z);
    j=0;
    while(j<z){
        printf("%d\n",tab[j]);
        j++;
    }
    printf("Posortowana malejaco:\n");
    j=0;
    bubbleSortM(tab,z);
    while(j<z){
        printf("%d\n",tab[j]);
        j++;
    }
    fclose(plik);
}
