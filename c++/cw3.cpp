
#include <iostream>
#include <math.h>
#include <string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
start:
    double a, b, c, delta, x1, x2;
    string decyzja = "tak";

    while(decyzja=="tak")
    {
    cout << "Podaj wspolczynnik a rownania kwadratowego: ";
    cin >> a;
    cout << "Podaj wspolczynnik b rownania kwadratowego: ";
    cin >> b;
    cout << "Podaj wspolczynnik c rownania kwadratowego: ";
    cin >> c;
    delta = b * b -( 4 * a * c );
    if( delta < 0 )
    {
        cout << "Rownanie nie ma rozwiazania" << endl;
        return 0;
    }
    if( delta == 0 )
    {
        cout << "Rownanie ma jendo rozwiazanie ";
        cout << "x = " <<- b /( 2 * a ) << endl;

        return 0;
    }
    delta = sqrt( delta );
    if( b > 0 )
    {
        x1 = ( - b - delta ) /( 2 * a );
        x2 = c /( a * x1 );
    }
    else
    {
        x2 = ( - b + delta ) /( 2 * a );
        x1 = c /( a * x2 );
    }
    cout << "Rowanie ma dwa rozwiazania: ";
    cout << "x = " << x1 << ", x = " << x2 << endl;
    while(true)
        
        {
                cout<<"Czy chcesz jeszcze raz policzyc? (tak/nie)";
                cin>>decyzja;
                transform(decyzja.begin(), decyzja.end(), decyzja.begin(), ::tolower);
                if(decyzja=="tak" or decyzja=="nie")break;
              }
}
}