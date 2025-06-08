#include <iostream>
using namespace std;
int main()
{
    int FirstNumber, SecondNumber;
    cout << "Enter the first number: ";
    cin >> FirstNumber;
    cout << "Enter the second number: ";
    cin >> SecondNumber;
    cout << "befor swap: FirstNumber = " << FirstNumber << ", SecondNumber = " << SecondNumber << endl;
    int temp = FirstNumber;
    FirstNumber = SecondNumber;
    SecondNumber = temp;
    cout << "after swap: FirstNumber = " << FirstNumber << ", SecondNumber = " << SecondNumber << endl;
    return 0;
}