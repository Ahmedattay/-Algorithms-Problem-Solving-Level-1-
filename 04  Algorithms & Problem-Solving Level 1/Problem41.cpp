#include <iostream>

int main() {
    int totalDays;
    std::cout << "Enter total number of days: ";
    std::cin >> totalDays;

    int weeks = totalDays / 7;
    int days = totalDays % 7;

    std::cout << totalDays << " days = " << weeks << " week(s) and " << days << " day(s)." << std::endl;

    return 0;
}