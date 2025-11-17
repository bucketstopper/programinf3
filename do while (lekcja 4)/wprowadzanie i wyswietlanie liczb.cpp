#include <iostream>
using namespace std;
 
int main() {
    int liczba;     
    char decyzja;   
 
    do {
        
        cout << "Podaj liczbe: ";
        cin >> liczba;
 
        
        cout << "Wprowadziles liczbe: " << liczba << endl;
 
        
        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> decyzja;
    } while (decyzja == 't' || decyzja == 'T');  
 
   
    cout << "Dziekuje za wprowadzenie liczb!" << endl;
 
    return 0;
}
