#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    while (age < 18 || age > 45)
    {
        cout << "Invalid age. Please enter a valid age between 18 and 45: ";
        cin >> age;
    }
    cout << "You are a valid age." << endl;
    return 0;
}