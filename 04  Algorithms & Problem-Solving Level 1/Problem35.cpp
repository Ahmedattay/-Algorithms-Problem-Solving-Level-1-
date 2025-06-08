#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters, halfDollars, dollars;

    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;
    cout << "Enter the number of half dollars: ";
    cin >> halfDollars;
    cout << "Enter the number of dollar coins: ";
    cin >> dollars;

    int totalCents = pennies * 1
                   + nickels * 5
                   + dimes * 10
                   + quarters * 25
                   + halfDollars * 50
                   + dollars * 100;

    int dollarsPart = totalCents / 100;
    int centsPart = totalCents % 100;

    cout << fixed << setprecision(2);
    cout << "Total amount in the piggy bank: $" << dollarsPart << ".";
    if (centsPart < 10) cout << "0";
    cout << centsPart << endl;

    return 0;
}