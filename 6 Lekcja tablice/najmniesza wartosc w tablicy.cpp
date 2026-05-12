#include <iostream>
using namespace std;
int main(){
int tablica[5];


cout << "Podaj 5 liczb calkowitych:\n";
for (int i = 0; i < 5; i++) {
	cout << "Podaj liczbe nr " << i + 1 << ": ";
	cin >> tablica[i];
}


int min = tablica[0];


for (int i = 1; i < 5; i++) {
	if (tablica[i] < min) {
		min = tablica[i];
	}
}


cout << "\nNajmniejsza wartosc w tablicy to: " << min << endl;
	return 0;
}