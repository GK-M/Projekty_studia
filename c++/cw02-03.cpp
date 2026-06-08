#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

    cout << "Napisz tekst (wstaw x na koncu tekstu w celu zakoñczenia pisania):" << endl;

    string tekst;
    getline(cin,tekst,'x');

    int wszystkie = tekst.length();
    int wiersz = 1;
    int slowacz = 0;
    int spacje = 0;
    int i;

    for(i=0; i<wszystkie; i++){
        if(tekst[i]==' '){
            spacje++;
        }
        else if(tekst[i] == '\n') {
            wiersz++;
        }
    }

    istringstream sstekst(tekst);
    while(sstekst >> tekst){
        slowacz++;
    }

    int czarne = wszystkie - spacje - (wiersz - 1);


     cout << "Liczba slow: "<< slowacz << endl;
    cout << "Czarne znaki: "<< czarne << endl;
    cout << "Spacje: "<< spacje << endl;
    cout << "Wiersze: " << wiersz << endl;

    return 0;
}

