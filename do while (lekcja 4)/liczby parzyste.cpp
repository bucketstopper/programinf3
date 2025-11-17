#include <iostream>
using namespace std;
 
int main() {
    int N;
 
   
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;
 
    
    if (N < 2) {
        cout << "N musi byc wieksze lub rowne 2!" << endl;
        return 1;
    }
 
    int i = 2; 
    while (i <= N) {
        cout << i << " "; 
        i += 2; 
    }
 
    cout << endl; 
    return 0;
}
