#include <iostream>
using namespace std;
int main()
{
    int FirstNumber, SecondNumber, ThirdNumber;
    cout << "Enter three numbers: ";
    cin >> FirstNumber >> SecondNumber >> ThirdNumber;
    int Sum = FirstNumber + SecondNumber + ThirdNumber;
    cout << "The sum of the three numbers is: " << Sum << endl;
    return 0;
}