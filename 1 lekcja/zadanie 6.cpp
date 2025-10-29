#include <iostream>
using namespace std;
 
int main() {
    int a ,b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    int suma = a + b;
    cout << "Suma: " << suma << endl;
    if ((suma % 2) ==1) {
	
    	cout << "Suma jest liczba nieparzysta. " << endl;

    }
    if ((suma % 2)==0) {
    	cout << "Suma jest liczba parzysta. " << endl;
	}
   
 
    return 0;
}
