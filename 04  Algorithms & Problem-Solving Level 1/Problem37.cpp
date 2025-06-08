#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter numbers to sum (enter -99 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -99)
            break;
        sum += num;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}