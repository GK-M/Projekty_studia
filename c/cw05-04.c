#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Użycie: %s n\n", argv[0]);
    return 1;
  }

  // Pobieramy wartość n z pierwszego argumentu
  int n = atoi(argv[1]);

  // Obliczamy silnię
  unsigned long long factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  // Wypisujemy wynik
  printf("%d! = %llu\n", n, factorial);

  return 0;
}
