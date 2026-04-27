#include <iostream>
using namespace std;


void WyswietlTablice(int tablica[], int rozmiar) {
    cout << "Zawartosc tablicy: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int liczby[] = {10, 20, 30, 40, 50};

   
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]); 
   
    WyswietlTablice(liczby, rozmiar);
    
    	int suma =0;
    	for (int i =0; i <5; i++){
    		suma+= liczby[i];
		}
		cout << "\nSuma wynosi: " << suma << endl;
	int tablica[5];
 


cout << "Podaj nowe elemnty tablicy:\n";
for (int i = 0; i < 5; i++) {
	cout << "Podaj nowa wartosc dla elementow " << i + 1 << ": ";
	cin >> tablica[i];
	cout << "Nowa tablica: " << tablica[i] << endl;
}


for (int i = 0; i < 5; i++) {
	suma += tablica[i];
}


cout << "Nowa suma elementow tablicy: " << suma << endl;	


    return 0;
}
