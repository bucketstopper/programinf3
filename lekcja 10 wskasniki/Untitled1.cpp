#include <iostream>
using namespace std;

// Funkcja obliczająca sumę elementów tablicy
int ObliczSume(int *tablica, int rozmiar)
{
    int suma = 0;

    for(int i = 0; i < rozmiar; i++)
    {
        suma += *(tablica + i); // dostęp przez wskaźnik
    }

    return suma;
}

int main()
{
    const int ROZMIAR = 4;
    int tablica[ROZMIAR] = {5, 10, 15, 20};

    // Obliczenie początkowej sumy
    int suma = ObliczSume(tablica, ROZMIAR);
    cout << "Suma elementow tablicy: " << suma << endl;

    // Zmiana wartości przez użytkownika
    for(int i = 0; i < ROZMIAR; i++)
    {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(tablica + i); // zmiana przez wskaźnik
    }

    // Wyświetlenie nowej tablicy
    cout << "Nowa tablica:" << endl;
    for(int i = 0; i < ROZMIAR; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // Ponowne obliczenie sumy
    suma = ObliczSume(tablica, ROZMIAR);
    cout << "Nowa suma elementow tablicy: " << suma << endl;

    return 0;
}