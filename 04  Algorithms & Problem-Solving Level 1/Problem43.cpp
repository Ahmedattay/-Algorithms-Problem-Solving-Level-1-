#include <iostream>
using namespace std;
int main()
{
    int Seconds;
    cout << "Enter total number of seconds: ";
    cin >> Seconds;
    int days = Seconds / (24 * 60 * 60);
    int hours = (Seconds % (24 * 60 * 60) / (60 * 60));
    int minutes = (Seconds % (24 * 60 * 60) % (60 * 60) / 60);
    Seconds = Seconds % (24 * 60 * 60) % (60 * 60) % 60;
    cout << "days: " << days << " hours: " << hours << " minutes: " << minutes << endl;
    cout << "Total seconds: " << Seconds << endl;
    return 0;
}