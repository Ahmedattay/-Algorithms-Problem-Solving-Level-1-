#include <iostream>
using namespace std;
int main()
{
    int Number;
    int power;
    cout << "Enter a positive integer: ";
    cin >> Number;
    cout << "Enter the power ";
    cin >> power;
    cout << Number << "^" << power << " = ";
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= Number;
    }
    cout << result << endl;
    return 0;
}