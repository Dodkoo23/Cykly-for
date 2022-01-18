// Trojuholnik.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//


#include<iostream>
using namespace std;

int main() {

	string a = "*";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= (3 - i); j++) {
			cout << a;
		}

		cout << endl;
	}
	
}

	
		

