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
	int iloraz = a / b;
	int reszta = a % b;
	cout << "Suma: " << suma << endl;
	cout << "Roznica: " << roznica << endl;
	cout << "Iloczyn: " << iloczyn << endl;
	cout << "Iloraz: " << iloraz << endl;
	cout << "Reszta: " << reszta << endl;
	
	return 0;
}