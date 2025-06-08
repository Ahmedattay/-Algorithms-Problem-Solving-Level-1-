#include <iostream>
using namespace std;
bool Hierd(int Age, bool driverlincense)
{
    if (Age >= 21 && driverlincense == true)
    {
        return true; // Hierd
    }
    else
    {
        return false; // Not Hierd
    }
}
int main()
{
    int age;
    bool driverlincense;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have a driver license? (1 for Yes, 0 for No): ";
    cin >> driverlincense;
    bool result = Hierd(age, driverlincense);
    if (result)
    {
        cout << "You are hired." << endl;
    }
    else
    {
        cout << "You are not hired." << endl;
    }

    return 0;
}