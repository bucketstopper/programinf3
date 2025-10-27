#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "liczba a: ";
	cin >> a;
	cout << "liczba b: ";
	cin >> b;
	int suma = a + b;
	int roznica = a - b;
	int iloczyn = a * b;
	cout << "Suma: " << suma << endl;
	cout << "Roznica: " << roznica << endl;
	cout << "Iloczyn: " << iloczyn << endl;

    return 0;
}