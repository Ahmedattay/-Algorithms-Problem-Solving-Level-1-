#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate number of months to pay off a loan
int CalculateLoanMonths(double loanAmount, double monthlyPayment) {
    if (monthlyPayment <= 0) return -1; // Invalid payment
    int months = ceil(loanAmount / monthlyPayment);
    return months;
}

int main() {
    double loanAmount, monthlyPayment;
    cout << "Enter loan amount: ";
    cin >> loanAmount;
    cout << "Enter monthly payment: ";
    cin >> monthlyPayment;

    int months = CalculateLoanMonths(loanAmount, monthlyPayment);

    if (months == -1) {
        cout << "Monthly payment must be greater than 0.\n";
    } else {
        cout << "You need " << months << " month(s) to pay off the loan.\n";
    }

    return 0;
}