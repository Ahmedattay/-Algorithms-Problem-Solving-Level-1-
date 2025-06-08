#include <iostream>
using namespace std;
int main()
{
    string FirstName, LastName;
    cin >> FirstName >> LastName;
    string FullName = FirstName + " " + LastName;
    cout << FullName << endl;
    return 0;
}