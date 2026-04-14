 #include <iostream>
using namespace std;


int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;
    return n;
}


int CalculateFibonacciRecursive(int index) {
    if (index == 0 || index == 1)
        return 1;
    else
        return CalculateFibonacciRecursive(index - 1) + CalculateFibonacciRecursive(index - 2);
}


void DisplayFibonacciSequence(int count) {
    cout << "Ciag Fibonacciego: ";
    for (int i = 0; i < count; i++) {
        cout << CalculateFibonacciRecursive(i);
        if (i != count - 1)
            cout << ", ";
    }
    cout << endl;
}


int main() {
    int liczbaElementow = GetNumberFromUser();
    DisplayFibonacciSequence(liczbaElementow);
    return 0;
}