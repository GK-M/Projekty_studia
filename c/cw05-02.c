#include <stdio.h>
#include <math.h>

// Struktura przechowująca dane o równaniu kwadratowym
struct Equation {
  double a;
  double b;
  double c;
};

// Funkcja obliczająca pierwiastki równania kwadratowego
void solveQuadraticEquation(struct Equation eq, double *x1, double *x2) {
  double discriminant = eq.b * eq.b - 4 * eq.a * eq.c;

  if (discriminant > 0) {
    *x1 = (-eq.b + sqrt(discriminant)) / (2 * eq.a);
    *x2 = (-eq.b - sqrt(discriminant)) / (2 * eq.a);
  } else if (discriminant == 0) {
    *x1 = -eq.b / (2 * eq.a);
  } else {
    *x1 = NAN;
    *x2 = NAN;
  }
}

int main(void) {
  // Otwieramy plik do odczytu
  FILE *file = fopen("dane_1.txt", "r");
  if (file == NULL) {
    perror("Nie udało się otworzyć pliku");
    return 1;
  }

  // Wczytujemy dane z pliku
  struct Equation eq;
  while (fscanf(file, "%lf%lf%lf", &eq.a, &eq.b, &eq.c) == 3) {
    // Obliczamy pierwiastki równania
    double x1, x2;
    solveQuadraticEquation(eq, &x1, &x2);

    // Wypisujemy wynik
    printf("Równanie: %.2fx^2 + %.2fx + %.2f = 0\n", eq.a, eq.b, eq.c);
    if (isnan(x1)) {
      printf("Brak rozwiązań\n");
    } else if (isnan(x2)) {
      printf("x = %.2f\n", x1);
    } else {
      printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
  }

  // Zamykamy plik
  fclose(file);

  return 0;
}