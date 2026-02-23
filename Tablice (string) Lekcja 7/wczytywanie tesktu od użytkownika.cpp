#include<iostream>
using namespace std;
int main() {
char tekst[50];
cout << "Podaj tekst (max 20 znakow): ";
cin.getline(tekst, 21);
cout << "Wprowadzono tekst: " << tekst << endl;
	return 0;
}