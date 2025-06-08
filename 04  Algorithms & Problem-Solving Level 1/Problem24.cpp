#include <iostream>
using namespace std;
int main()
{
    int Age;
    cout << "Enter your age: ";
    cin >> Age;
    if (Age >= 18)
    {
        cout << "you are valid age";
    }
    else
    {
        cout << "you are not valid age";
    }

    return 0;
}