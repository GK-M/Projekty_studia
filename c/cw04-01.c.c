 #include<stdio.h>
 int main()
 {
    int n=1, j, i;
    printf("Petla for\n");
    for (n=1; n<22; n++)
    printf("%d\n", n*n);
    
    
 i=1;
 printf("Petla while\n");
 while(i<22)
 {
 printf("%d\n", i*i);
 i++;
 }
 
 
 j=1;
 printf("Petla do while\n");
 do 
 {
 printf("%d\n", j*j);
 j++;
 } while(j<22);
 
 }
