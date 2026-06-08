#include <iostream>
#include <cmath>

class Punkt {
public:
    Punkt() {
        x = 0;
        y = 0;
    }

    Punkt(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

private:
    double x;
    double y;
};

class Okrag {
public:
    Okrag() {
        srodek = Punkt();
        promien = 0;
    }

    Okrag(const Punkt& srodek, double promien) {
        this->srodek = srodek;
        this->promien = promien;
    }

    Okrag(double x, double y, double promien) {
        srodek = Punkt(x, y);
        this->promien = promien;
    }

    void wypiszInfo() const {
        std::cout << "Srodek: (" << srodek.getX() << ", " << srodek.getY() << "), Promien: " << promien << std::endl;
    }

    double pole() const {
        return M_PI * promien * promien;
    }

    int liczbaPunktowWspolnych(const Okrag& inny) const {
        double odleglosc = sqrt(pow(srodek.getX() - inny.srodek.getX(), 2) + pow(srodek.getY() - inny.srodek.getY(), 2));
        if (odleglosc > promien + inny.promien) {
            return 0; 
        } else if (odleglosc == promien + inny.promien) {
            return 1; 
        } else {
            return 2; 
        }
    }

private:
    Punkt srodek;
    double promien;
};

int main() {
    Okrag okrag1(0, 0, 5);
    Okrag okrag2(8, 0, 3);

    okrag1.wypiszInfo(); 
    std::cout << "Pole: " << okrag1.pole() << std::endl; 

    okrag2.wypiszInfo(); 
    std::cout << "Pole: " << okrag2.pole() << std::endl; 

    int liczbaPunktow = okrag1.liczbaPunktowWspolnych(okrag2);
    std::cout << "Liczba punktow wspolnych: " << liczbaPunktow << std::endl; 

    return 0;
}