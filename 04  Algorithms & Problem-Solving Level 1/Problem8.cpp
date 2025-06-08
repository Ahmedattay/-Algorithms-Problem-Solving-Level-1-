#include <iostream>
using namespace std;
int main()
{
    int Grade;
    cout << "Enter your grade: ";
    cin >> Grade;
    if (Grade >= 50)
    {
        cout << "You have passed the exam." << endl;
    }
    else
    {
        cout << "You have failed the exam." << endl;
    }
    return 0;
}