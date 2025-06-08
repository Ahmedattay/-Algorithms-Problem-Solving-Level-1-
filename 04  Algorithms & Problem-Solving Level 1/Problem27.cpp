#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    for (int i = N; i >= 1; --i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}