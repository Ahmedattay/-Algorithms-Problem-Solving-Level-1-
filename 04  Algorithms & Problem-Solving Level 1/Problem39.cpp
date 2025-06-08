#include <iostream>

using namespace std;

// Problem #39 - Pay Remainder
// Given a total amount and a payment amount, calculate the remainder after payment.

int main() {
    double totalAmount, payment;
    cout << "Enter total amount: ";
    cin >> totalAmount;
    cout << "Enter payment amount: ";
    cin >> payment;

    if (payment > totalAmount) {
        cout << "Payment exceeds total amount. Remainder: 0" << endl;
    } else {
        double remainder = totalAmount - payment;
        cout << "Remainder after payment: " << remainder << endl;
    }

    return 0;
}