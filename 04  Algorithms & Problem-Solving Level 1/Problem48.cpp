#include <iostream>
#include <iomanip>
#include <cmath> // Add this line

int main() {
    double loanAmount, annualInterestRate;
    int numberOfMonths;

    std::cout << "Enter loan amount: ";
    std::cin >> loanAmount;

    std::cout << "Enter annual interest rate (in %): ";
    std::cin >> annualInterestRate;

    std::cout << "Enter number of months: ";
    std::cin >> numberOfMonths;

    double monthlyInterestRate = annualInterestRate / 12 / 100;

    double monthlyInstallment;
    if (monthlyInterestRate == 0) {
        monthlyInstallment = loanAmount / numberOfMonths;
    } else {
        // Use std::pow explicitly
        monthlyInstallment = loanAmount * monthlyInterestRate /
            (1 - std::pow(1 + monthlyInterestRate, -numberOfMonths));
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Monthly installment: " << monthlyInstallment << std::endl;

    return 0;
}