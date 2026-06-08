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
   fstream plik1, plik2;
   int i[6], x;
   string tmp;


   plik1.open("dane.txt", ios_base::in);


   plik2.open("dane2.txt", ios_base::out);

   if(plik1.good()){




       while(!plik1.eof()){
       plik1>>tmp;
       tmp[0]=toupper (tmp[0]);
       cout<<tmp<<endl;
       plik2<<tmp<<endl;//zapisz plik

       }




   }
   else cout<<"problem z otworzeniem pliku nr 1"<<endl;



    return 0;
}
