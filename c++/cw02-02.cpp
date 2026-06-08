#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <conio.h>

using namespace std;

int main()
{
    float a, b, c, delta;
    double x0, x1, x2;
    fstream plik1, plik2;
    string tmp;
    int i, z[5];

    cout<<"ROWNANIE KWADRATOWE."<<endl;

    plik1.open("dane.txt", ios_base::in);

    if(plik1.good()){

        cout<<"polaczenie z plikiem"<<endl<<endl;
         plik1>>a >>b >>c;
         cout<<"pobrane dane to: "<<a <<"  "<<b<<"  "<<c<<endl<<endl;
        delta=b*b-4*a*c;

        if(a==0)
        {

        cout<<"to nie jest rownanie kwadratowe"<<endl;

        }
        else {


             if (delta>0){
                 x1=(-b-sqrt(delta))/2/a;
                 x2=(-b+sqrt(delta))/2/a;
                 cout<< "Delta wynosi: "<< delta <<endl;
                 cout<< "x1: "<<fixed<<setprecision(3)<< x1 <<"x2: "<< fixed<<setprecision(3)<< x2<<endl;

             }
             else{
                    if  (delta==0){
                 x0=-b/2/a;
                 cout<<"x0: "<< x0 <<endl;
                 }
                 else{
                   cout<<"Brak rozwiazan rownania kwadratowego"<<endl;
                 }
             }
        }
    }
    else cout<<"brak polaczenia z plikiem"<<endl;


      plik1.close();

    return 0;
}
