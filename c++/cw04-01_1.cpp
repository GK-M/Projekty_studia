#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

inline double kw(double a) {return a*a;}

class punkt
{
   double x,y;
    public:
    void piszP()
    { cout << '(' << x << ',' << y <<')' ;}
    void piszW ()
    { cout << '[' << x << ',' << y << ']';}
    double odl(punkt &P2)
    {return sqrt(kw(x-P2.x)+kw(y-P2.y));}
       double wprowadz(double ax, double ay)
        { x=ax; y=ay;}
        void wektor (punkt &Wek)
        {
            x+=Wek.x;
            y+=Wek.y;
            cout << '(' << x << ','<< y << ')';
            }
        };
main(int argc, char *argv[])
{
    punkt A,B,W;
    int x,y;
    cout << "Wprowadz wspolrzedne x punktu A:";
    cin >> x;
    cout << "Wprowadz wspolrzedne y punktu A:";
    cin >> y;
    A.wprowadz(x,y);

    cout << "Wprowadz wspolrzedne x punktu B:";
    cin >> x;
    cout << "Wprowadz wspolrzedne y punktu B:";
    cin >> y;
    B.wprowadz(x,y);

    cout << " Punkt A";
    A.piszP();
    cout << endl;

    cout << "Punkt B";
    B.piszP();
    cout << endl;
    cout << endl << "Odleglosc miedzy punktami A i B wynosi:" << A.odl(B) << endl << endl;

    cout << " Wprowadz wspolrzedna x wektora: " ;
    cin >> x;
    cout << " Wprowadz wspolrzedna y wektora: ";
    cin >> y;
    W.wprowadz(x,y);

    cout << "Wektor" ;
    W.piszW();
    cout << endl;

    cout << "Przesuniecie punktu A o wektor";
    W.piszW();
    cout << endl;
    A.wektor(W);

    cout << endl << "Przesuniecie punktu B o wektor";
    W.piszW();
    cout << endl;
    B.wektor(W);
    return 0;
    }