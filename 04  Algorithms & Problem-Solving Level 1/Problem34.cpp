#include <iostream>
using namespace std;

int main() {
    double totalSales, commissionPercentage, commissionAmount;

    cout << "Enter total sales amount: ";
    cin >> totalSales;

    cout << "Enter commission percentage: ";
    cin >> commissionPercentage;

    commissionAmount = totalSales * (commissionPercentage / 100.0);

    cout << "Commission amount: " << commissionAmount << endl;

    return 0;
}