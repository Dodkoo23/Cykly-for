

#include<iostream>
using namespace std;

int main() {
	
	string a = "*";

	for (int i = 4; i > 0; i--) {
		for (int j = 0; j <= (4 - i); j++) {
			cout << a;
		}

		cout << endl;
	}
