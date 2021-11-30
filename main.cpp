#include <iostream>
#include <cmath>
#include <fstream>
 
using namespace std;
 
int ilosc, wynik;
 
void czynniki(int n)
{
    int g,i;
    ilosc = 0;
    g = sqrt(n);
 
    for(i = 2; i <= g; i++)
    {
        while(n % i == 0)
        {
            ilosc+=i;
            n /= i;
        }
 
        if(n == 1)
        {
            return;
        }
    }
 
}
int main()
{
 
	ifstream odczyt("C://liczby.txt");
 
	if(odczyt.is_open())
	{
		int n;
 
		while(odczyt>>n)
		{
			while (n!=0)
		    {
		        czynniki(n);
		        n = ilosc;
		        wynik++;
		    }
		    cout << wynik << endl;
		}
	}
 
 
    return 0;
}

