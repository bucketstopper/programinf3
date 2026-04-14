#include <iostream>
using namespace std;


void ZmienWartosc(int *wskaznik) {
    *wskaznik = *wskaznik + 10;  
}

int main() {
    int a = 5;          
    int b = 10;
    cout << " Wartosc przed wywolaniem funkcji: " << endl;
    cout << " a " << a << endl;
    cout << " b " << b << endl;

    ZmienWartosc(&a);    
    cout << "Wartosc po wywolaniu funkcji: " << a << endl;
ZmienWartosc(&b);    
    cout << "Wartosc po wywolaniu funkcji: " << b << endl;
    return 0;
}