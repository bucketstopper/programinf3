#include <iostream>
using namespace std;

int main() {
    int wybor;
    double a, b, wynik;

    do {
        cout << "Wybierz funkcje:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Wyjscie" << endl;

        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        cout << "Podaj pierwsza liczbe: ";
        cin >> a;

        cout << "Podaj druga liczbe: ";
        cin >> b;

        switch (wybor) {
            case 1:
                wynik = a + b;
                cout << "Wynik: " << wynik << endl;
                break;

            case 2:
                wynik = a - b;
                cout << "Wynik: " << wynik << endl;
                break;

            case 3:
                wynik = a * b;
                cout << "Wynik: " << wynik << endl;
                break;

            case 4:
                if (b != 0) {
                    wynik = a / b;
                    cout << "Wynik: " << wynik << endl;
                } else {
                    cout << "Nie mozna dzielic przez 0!" << endl;
                }
                break;

            default:
                cout << "Nieprawidlowy wybor!" << endl;
        }

        cout << endl;

    } while (wybor != 0);

    return 0;
}