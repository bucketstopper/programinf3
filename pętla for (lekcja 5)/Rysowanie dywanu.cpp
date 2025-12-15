#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

   
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    
    for (int i = 0; i < szerokosc; i++) {
        cout << "-";
    }
    cout << endl;

  
    for (int i = 0; i < wysokosc - 2; i++) { 
        cout << "|";  
        
        
        for (int j = 0; j < szerokosc - 2; j++) {  
            if ((i + j) % 2 == 0) {
                cout << "#";
            } else {
                cout << "*";
            }
        }
        
        cout << "|";  
        cout << endl;
    }

    
    for (int i = 0; i < szerokosc; i++) {
        cout << "-";
    }
    cout << endl;

    return 0;
}
