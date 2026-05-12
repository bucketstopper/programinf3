#include <iostream>
using namespace std;
 
int main() {
    int N, suma = 0, i = 1;
 
   
    cout << "Podaj liczbe N: ";
    cin >> N;
 
   
    if (N <= 0) {
        cout << "Liczba N musi byc dodatnia!" << endl;
        return 1; 
    }
 
   
    while (i <= N) {
        suma += i; 
        i++; 
    }
 
    
    
    cout << "Suma liczb naturalnych do " << N << ": " << suma << endl;
 
    return 0;
}