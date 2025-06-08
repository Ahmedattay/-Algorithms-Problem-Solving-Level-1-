#include <iostream>
using namespace std;
bool Hierd(int Age, bool driverlincense, bool hasrecommendation)
{
    if (hasrecommendation == true)
    {
        return 1;
    }
    else
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
}
int main()
{
    int age;
    bool driverlincense;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have a driver license? (1 for Yes, 0 for No): ";
    cin >> driverlincense;
    bool hasrecommendation;
    cout << "Do you have a recommendation? (1 for Yes, 0 for No): ";
    cin >> hasrecommendation;
    bool result = Hierd(age, driverlincense, hasrecommendation);
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