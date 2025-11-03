#include <iostream>
using namespace std;
int main () {
	int punkty;
	cout << "podaj wynik egzaminu (liczba punktow): ";
	cin >> punkty;
	if (punkty <0 || punkty > 100) {
		cout << "blad: wynik musi byc w zakresie od 0 do 100. " << endl;
	}
	else if (punkty <= 49) {
		cout << "ocena: niedostateczna" << endl;
	}
	else if (punkty <= 69) {
		cout << "ocena dostateczna" << endl;
	}
	else if (punkty <= 84) {
		cout << "ocena dobra" << endl;
	}
    else if (punkty <= 99) {
    	cout << "ocena dobra" << endl;
	}
	else if (punkty <= 100) {
		cout << "ocena celujaca" << endl;
	}

	return 0;
}