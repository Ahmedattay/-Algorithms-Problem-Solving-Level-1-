#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << num << "^2 = " << num * num << endl;
    cout << num << "^3 = " << num * num * num << endl;
    cout << num << "^4 = " << num * num * num * num << endl;
    return 0;
}