#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int n;
    int i;
    char haslo[20];
    char malespol[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char malesam[] = {'a','e','i','o','u','y'};
    char duze[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char specjalne[] = {'!','@','#','$','%','^','&','*','+','-'};
    char cyfry[] = {'0','1','2','3','4','5','6','7','8','9'};
    cout<<"Podaj rozmiar hasla (od 3 do 20 znakow): ";
    cin>>n;
    
    srand(time(0));
    
    for(i=0;i<n;i++)
    {
	if(i==0)
	{
	    haslo[i]=cyfry[(rand()%10)];
	}
	if(i==1)
	{
	    haslo[i]=duze[(rand()%26)];
	}
	if(i==2)
	{
	    haslo[i]=specjalne[(rand()%10)];
	}
	if(i>2 && i%2!=0)
	{
	    haslo[i]=malespol[(rand()%20)];
	}
	if(i>2 && i%2==0)
	{
	    haslo[i]=malesam[(rand()%6)];
	}
	
	
    }
    
    cout<<"Haslo to: ";
    
    for(i=0;i<n;i++)
    {
	cout<<haslo[i];
    }
    cout << endl;
    
	return 0;
}