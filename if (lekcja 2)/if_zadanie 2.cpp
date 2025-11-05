#include <iostream>
using namespace std;
int main () {
	int waga;
	int wzrost;
	cout << "podaj wage: " << endl;
	cin >> waga;
	cout << "podaj wzrost: " << endl;
	cin >> wzrost;
	double bmi = waga / (wzrost * wzrost);
     cout << " Twoje bmi wynosi: " << endl;
	if  ((bmi >= 1) && (bmi <= 18.5)) {
 		cout << "Twoj stan Wagowy: niedowaga " << endl;
	}
	else if  ((bmi >=18.5) && (bmi<=24.9)) {
		cout << "Twoj stan Wagowy: W normie " << endl;
	}
	else if  ((bmi >=25) && (bmi <=29.9)) {
		cout << "Twoj stan Wagowy: Nadwaga " << endl;
	}
	else if ((bmi >30)) {
		cout << "Twoj stan Wagowy: Otylosc " << endl;
	}
	  
	 return 0;
}