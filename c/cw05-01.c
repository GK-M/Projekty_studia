#include <stdio.h>

int main(void) {
  int n;
  unsigned long long factorial = 1;

  printf("Podaj liczbe naturalna: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  printf("%d! = %llu\n", n, factorial);

  return 0;
}