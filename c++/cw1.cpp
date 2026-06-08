#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
int n,m,x,y;
cout<<"Tabliczka Mnozenia" <<endl <<endl;
cout<<"Podaj liczbe kolumn: "; cin>>m;
cout<<"Podaj liczbe wierszy: "; cin>>n;
    for (x=1;x<=n;x++)
    {
        for (y=1;y<=m;y++)
          {
           cout << x*y << "\t";
                 }

    cout << endl;
    }
}