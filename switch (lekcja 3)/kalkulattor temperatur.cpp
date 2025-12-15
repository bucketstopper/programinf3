#include <iostream>
using namespace std;

int main() {
    double celsius;
    char wybor;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> wybor;

    switch (wybor) {
        case 'K':
        case 'k': {
            double kelvin = celsius + 273.15;
            cout << "Temperatura w Kelwinach: " << kelvin << endl;
            break;
        }

        case 'F':
        case 'f': {
            double fahrenheit = (celsius * 9.0 / 5.0) + 32;
            cout << "Temperatura w stopniach Fahrenheita: " << fahrenheit << endl;
            break;
        }

        default:
            cout << "Blad: wybrano nieprawidlowa opcje!" << endl;
    }

    return 0;
}