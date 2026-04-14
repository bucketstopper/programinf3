#include <iostream>
using namespace std;


int Silnia(int liczba) {
    if (liczba == 1)
        return 1;
    else
        return liczba + Silnia(liczba - 1);
}

int main() {
	int liczba;
	cout << "podaj liczbe: " ; 
	cin >> liczba ;
	
	int wynik = Silnia(liczba);
    cout << " suma liczb od 1 do " << liczba << " wynosi " << wynik << endl; 
	              
                         
    return 0;                                               
}       