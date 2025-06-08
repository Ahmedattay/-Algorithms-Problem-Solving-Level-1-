#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n";
    cout << "Enter the day number: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;
    default:
        cout << "Invalid day number!";
        break;
    }
    return 0;
}