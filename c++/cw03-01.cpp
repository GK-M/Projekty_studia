#include <iostream>
#include <cmath>

using namespace std;

// Funkcja obliczajaca pierwiastek kwadratowy liczby x
double pierw(double x) {
return sqrt(x);
}

// Funkcja obliczajaca pierwiastek n-tego stopnia z liczby x
double pierw(double x, int n) {
return pow(x, 1.0/n);
}

int main() {
cout << "Pierwiastki kwadratowe liczb od 1 do 5:" << endl;
for (int i = 1; i <= 5; i++) {
cout << "Pierwiastek kwadratowy z " << i << " wynosi " << pierw(i) << endl;
}

cout << "\nPierwiastki trzeciego stopnia liczb od 1 do 5:" << endl;
for (int i = 1; i <= 5; i++) {
cout << "Pierwiastek trzeciego stopnia z " << i << " wynosi " << pierw(i, 3) << endl;
}

return 0;
}
