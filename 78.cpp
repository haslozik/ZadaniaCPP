#include <iostream>
#include <fstream>

using namespace std;

bool zadaniePierwsze = true;

string skrot(string wiadomosc) {
	int S[8] = {'A','L','G','O','R','Y','T','M'};
	while (wiadomosc.length() % 8 != 0) {
		wiadomosc += '.';
	}
	
	if (zadaniePierwsze) cout << wiadomosc.length() << endl; 
	
	int j = 0;
	for (int i = 0; i < wiadomosc.length(); i++) {
		S[j] = (S[j] + wiadomosc[i]) % 128;
		j++;
		if (j == 8) j = 0;
	}
	string wynik = "";
	
	if (zadaniePierwsze) {
		for (int i = 0; i < 8; i++) {
			cout << S[i] << " ";
		}
		cout << endl;
	}
	
	for (int j = 0; j < 8; j++) {
		wynik = wynik + (char) (65 + S[j] % 26);
	}
	return wynik;
}



void z1() {
	cout << "Zadanie 1: " << endl;
	ifstream in("wiadomosci.txt");
	string s;
	getline(in, s);
	cout << skrot(s) << endl << endl;
	zadaniePierwsze = false;
}

int main() {
	z1();
	return 0;
}
