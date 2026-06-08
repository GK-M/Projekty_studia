#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
float tab[3][3];
void suma()
{
    float k=tab[0][0]+tab[1][1]+tab[2][2]; cout<<k<<endl;
}
void liczba()
{
    float n;
    cin >> n;
    cout << endl;
    for(int i=0; i<3 ; i++)
        {
            for (int j=0;j<3;j++)
            {
                cout << setw(5) << tab[i][j] * n;
            }
        cout <<" " <<endl<<endl;
        }
}
 
void iloczyn()
{
 
        cout<<setw(6);
cout << (tab[0][0]*tab[0][0])+(tab[0][1]*tab[1][0])+(tab[0][2]*tab[2][0]);
cout << "    ";
cout << (tab[0][0]*tab[0][1])+(tab[0][1]*tab[1][1])+(tab[0][2]*tab[2][1]);
cout << "    ";
cout << (tab[0][0]*tab[0][2])+(tab[0][1]*tab[1][2])+(tab[0][2]*tab[2][2]);
cout << "    "<<endl<<endl;
 
cout << "    ";
cout << (tab[1][0]*tab[0][0])+(tab[1][1]*tab[1][0])+(tab[1][2]*tab[2][0]);
cout << "    ";
cout << (tab[1][0]*tab[0][1])+(tab[1][1]*tab[1][1])+(tab[1][2]*tab[2][1]);
cout << "    ";
cout << (tab[1][0]*tab[0][2])+(tab[1][1]*tab[1][2])+(tab[1][2]*tab[2][2]);
cout << "    "<<endl<<endl;
 
cout << "    ";
cout << (tab[2][0]*tab[0][0])+(tab[2][1]*tab[1][0])+(tab[2][2]*tab[2][0]);
cout << "    ";
cout << (tab[2][0]*tab[0][1])+(tab[2][1]*tab[1][1])+(tab[2][2]*tab[2][1]);
cout << "    ";
cout << (tab[2][0]*tab[0][2])+(tab[2][1]*tab[1][2])+(tab[2][2]*tab[2][2]);
cout << "    "<<endl<< endl;
 
}
 
int main()
{
    fstream dane("matrix.txt", ios::in);
    if (dane.good()==false)
    {
        cout<<"Problem z plikiem!"<<endl;
        exit(0);
    }
else
{
    cout<<"Wczytana macierz ma postac: "<<endl<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            dane>>tab[i][j];
            cout<<setw(5)<<tab[i][j];
        }
        cout<<endl<<endl;
    }
dane.close();
//a
cout<<"Suma na diagonali wynosi: ";suma();
cout<<endl;
cout<<"Iloczyn tej macierzy przez sama siebie wynosi: "<<endl;iloczyn();
cout<<endl;
cout<< "Podaj liczbe skalarna przez ktora chcesz pomnozyc macierz:";liczba();
cout<<endl;
 
}
 
 
    return 0;
}