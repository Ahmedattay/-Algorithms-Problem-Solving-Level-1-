#include <iostream>
#include <iomanip>

int main() {
    double amount, serviceFeeRate, salesTaxRate;

    std::cout << "Enter the amount: ";
    std::cin >> amount;

    std::cout << "Enter the service fee rate (%): ";
    std::cin >> serviceFeeRate;

    std::cout << "Enter the sales tax rate (%): ";
    std::cin >> salesTaxRate;

    double serviceFee = amount * (serviceFeeRate / 100.0);
    double salesTax = amount * (salesTaxRate / 100.0);
    double total = amount + serviceFee + salesTax;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Service Fee: $" << serviceFee << std::endl;
    std::cout << "Sales Tax: $" << salesTax << std::endl;
    std::cout << "Total Amount: $" << total << std::endl;

    return 0;
}