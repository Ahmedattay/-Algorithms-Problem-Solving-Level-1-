#include <iostream>
#include <string>

int main() {
    const std::string correctPIN = "1234";
    std::string enteredPIN;
    int attempts = 0;
    const int maxAttempts = 3;

    while (attempts < maxAttempts) {
        std::cout << "Please enter your ATM PIN: ";
        std::cin >> enteredPIN;

        if (enteredPIN == correctPIN) {
            std::cout << "PIN accepted. Welcome!\n";
            return 0;
        } else {
            attempts++;
            if (attempts < maxAttempts) {
                std::cout << "Incorrect PIN. Try again.\n";
            }
        }
    }

    std::cout << "Your card is locked.\n";
    return 0;
}