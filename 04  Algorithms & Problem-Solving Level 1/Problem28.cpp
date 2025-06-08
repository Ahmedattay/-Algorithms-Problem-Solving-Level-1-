#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "The sum of odd numbers from 1 to " << N << " is: " << sum << endl;
    return 0;
}