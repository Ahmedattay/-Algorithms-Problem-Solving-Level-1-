#include <iostream>
using namespace std;
int Checkoddoreven(int number)
{
    if (number % 2 == 0)
    {
        return 0; // Even
    }
    else
    {
        return 1; // Odd
    }
}
int main()
{
    int number1;
    cout << "Enter a number: ";
    cin >> number1;
    int result = Checkoddoreven(number1);
    if (result == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }
    return 0;
}