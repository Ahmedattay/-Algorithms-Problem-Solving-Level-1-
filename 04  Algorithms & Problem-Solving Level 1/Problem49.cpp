#include <iostream>
using namespace std;

int main() {
    int pin;
    cout << "Enter your ATM PIN: ";
    cin >> pin;

    if (pin == 1234) {
        cout << "The balance is 7600" << endl;
    } else {
        cout << "Incorrect PIN." << endl;
    }

    return 0;
}