#include <iostream>

using namespace std;

// Function to calculate factorial of n
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for(int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << n << "! = " << factorial(n) << endl;
    }

    return 0;
}