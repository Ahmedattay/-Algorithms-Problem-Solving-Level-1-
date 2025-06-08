#include <iostream>
using namespace std;
int main()
{
    int FirstNumber, SecondNumber, ThirdNumber;
    cout << "Enter three numbers: ";
    cin >> FirstNumber >> SecondNumber >> ThirdNumber;
    if (FirstNumber > SecondNumber && FirstNumber > ThirdNumber)
    {
        cout << "The largest number is: " << FirstNumber << endl;
    }
    else if (SecondNumber > FirstNumber && SecondNumber > ThirdNumber)
    {
        cout << "The largest number is: " << SecondNumber << endl;
    }
    else
    {
        cout << "The largest number is: " << ThirdNumber << endl;
    }
    return 0;
}