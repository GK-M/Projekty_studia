#include <stdio.h>

int main(void) {
  // Otwieramy plik do odczytu
  FILE *file = fopen("dane_2.txt", "r");
  if (file == NULL) {
    perror("Nie udało się otworzyć pliku");
    return 1;
  }

  // Inicjalizujemy największą i najmniejszą liczbę
  int max = 0;
  int min = 0;
  int found = 0;

  // Wczytujemy liczby z pliku
  int x;
  while (fscanf(file, "%d", &x) == 1) {
    if (!found) {
      // Jeśli to pierwsza liczba, ustawiamy ją jako największą i najmniejszą
      max = x;
      min = x;
      found = 1;
    } else {
      // Jeśli to kolejna liczba, sprawdzamy, czy jest większa od dotychczas największej lub mniejsza od dotychczas najmniejszej
      if (x > max) {
        max = x;
      }
      if (x < min) {
        min = x;
      }
    }
  }

  // Zamykamy plik
  fclose(file);

  // Wypisujemy wynik
  printf("Największa liczba: %d\n", max);
  printf("Najmniejsza liczba: %d\n", min);

  return 0;
}
