#include <iostream>
using namespace std;
int main()
{
    int FirstNumber, SecondNumber;
    cout << "Enter the first number: ";
    cin >> FirstNumber;
    cout << "Enter the second number: ";
    cin >> SecondNumber;
    if (FirstNumber > SecondNumber)
    {
        cout << "The first number is greater than the second number." << endl;
    }
    else if (FirstNumber < SecondNumber)
    {
        cout << "The first number is less than the second number." << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}