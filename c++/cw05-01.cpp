#include <iostream>

using namespace std;

class Figura {
public:
    virtual double obliczPole() const = 0;
    virtual double obliczObwod() const = 0;
    virtual void wypiszInformacje() const = 0;
};

class FiguraPłaska : public Figura {
public:
    void wypiszInformacje() const override {
        cout << "To jest figura płaska." << endl;
    }
};

class Prostokąt : public FiguraPłaska {
private:
    double a, b;

public:
    Prostokąt(double a, double b) : a(a), b(b) {}

    double obliczPole() const override {
        return a * b;
    }

    double obliczObwod() const override {
        return 2 * (a + b);
    }

    void wypiszInformacje() const override {
        cout << "To jest prostokąt o wymiarach: " << a << " x " << b << endl;
    }
};

class Kwadrat : public FiguraPłaska {
private:
    double a;

public:
    Kwadrat(double a) : a(a) {}

    double obliczPole() const override {
        return a * a;
    }

    double obliczObwod() const override {
        return 4 * a;
    }

    void wypiszInformacje() const override {
        cout << "To jest kwadrat o boku: " << a << endl;
    }
};

class FiguraPrzestrzenna {
public:
    virtual double obliczObjętość() const = 0;
};

class Sześcian : public FiguraPrzestrzenna {
private:
    double a;

public:
    Sześcian(double a) : a(a) {}

    double obliczObjętość() const override {
        return a * a * a;
    }
};

int main() {
    Figura* figura = new Prostokąt(3, 4);
    figura->wypiszInformacje();
    cout << "Pole: " << figura->obliczPole() << endl;
    cout << "Obwód: " << figura->obliczObwod() << endl;

    figura = new Kwadrat(5);
    figura->wypiszInformacje();
    cout << "Pole: " << figura->obliczPole() << endl;
    cout << "Obwód: " << figura->obliczObwod() << endl;

    FiguraPrzestrzenna* figuraPrzestrzenna = new Sześcian(3);
    cout << "Objętość sześcianu: " << figuraPrzestrzenna->obliczObjętość() << endl;

    delete figura;
    delete figuraPrzestrzenna;

    return 0;
}