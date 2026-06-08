#include <iostream>

using namespace std;

class Dana {
protected:
    double wartosc;

public:
    Dana() : wartosc(0) {}

    Dana(double wartosc) : wartosc(wartosc) {}

    Dana(const Dana& other) : wartosc(other.wartosc) {}

    void wypiszWartosc() const {
        cout << "Wartość: " << wartosc << endl;
    }

    void wczytajWartosc() {
        cout << "Podaj wartość: ";
        cin >> wartosc;
    }

    virtual bool isValid() const = 0;

    double get() const {
        return wartosc;
    }
};

class DanaDlugosci : public Dana {
public:
    DanaDlugosci() : Dana() {}

    DanaDlugosci(double wartosc) : Dana(wartosc) {}

    DanaDlugosci(const DanaDlugosci& other) : Dana(other) {}

    bool isValid() const override {
        return wartosc >= 0;
    }
};

class DanaKatow : public Dana {
public:
    DanaKatow() : Dana() {}

    DanaKatow(double wartosc) : Dana(wartosc) {}

    DanaKatow(const DanaKatow& other) : Dana(other) {}

    bool isValid() const override {
        return wartosc >= 0 && wartosc <= 360;
    }
};

int main() {
    DanaDlugosci dlugosc;
    dlugosc.wczytajWartosc();

    while (!dlugosc.isValid()) {
        cout << "Niepoprawna wartość! Długość nie może być ujemna. Podaj wartość ponownie: ";
        dlugosc.wczytajWartosc();
    }

    dlugosc.wypiszWartosc();

    DanaKatow kat;
    kat.wczytajWartosc();

    while (!kat.isValid()) {
        cout << "Niepoprawna wartość! Kąt musi być z zakresu 0-360. Podaj wartość ponownie: ";
        kat.wczytajWartosc();
    }

    kat.wypiszWartosc();

    return 0;
}