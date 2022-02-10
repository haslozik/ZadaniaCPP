#include <iostream>
#include <fstream>

using namespace std;

string szyfrowanie(string s, int kl[], int klLen) {
  char temp;
  int klId = 0;
  
  for (int i = 0; i < s.length(); i++) {
    temp = s[i];
    s[i] = s[kl[klId] - 1];
    s[kl[klId] - 1] = temp;
    klId++;
    
    if (klId == klLen) {
    	klId = 0;
	}
  }
  return s;
}

void zad1() {
  ifstream plik("dane1.txt");
  
  string tab[6];
  int kl[50];
  
  for (int i = 0; i < 6; i++) {
  	plik >> tab[i];
  }
  for (int i = 0; i < 50; i++) {
  	plik >> kl[i];
  }
  
  for (int i = 0; i < 6; i++) {
  	cout << szyfrowanie(tab[i], kl, 50) << endl;
  }
  cout << endl;
}

void zad2() {
  ifstream plik ("dane2.txt");
  string s;
  plik >> s;
  int kl[15];
  for (int i = 0; i < 15; i++) {
  	plik >> kl[i];
  }
  cout << szyfrowanie(s, kl, 15) << endl;
}


int main() {
  zad1();
  zad2();
}
