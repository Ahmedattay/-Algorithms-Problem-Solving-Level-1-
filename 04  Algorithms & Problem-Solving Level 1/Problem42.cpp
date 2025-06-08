#include <iostream>
using namespace std;
int main()
{
    int Days, hours, minutes, seconds;
    cout << "Enter total number of days: ";
    cin >> Days;
    cout << "Enter total number of hours: ";
    cin >> hours;
    cout << "Enter total number of minutes: ";
    cin >> minutes;
    cout << "Enter total number of seconds: ";
    cin >> seconds;
    int TotalSecond = (Days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
    cout << "Total seconds: " << TotalSecond << endl;
    return 0;
}