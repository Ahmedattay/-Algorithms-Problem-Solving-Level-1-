#include <iostream>
using namespace std;
int main()
{
    int FirstGrade, SecondGrade, ThirdGrade;
    cout << "Enter the first grade: ";
    cin >> FirstGrade;
    cout << "Enter the second grade: ";
    cin >> SecondGrade;
    cout << "Enter the third grade: ";
    cin >> ThirdGrade;
    int Average = (FirstGrade + SecondGrade + ThirdGrade) / 3;
    cout << "The average of the three grades is: " << Average << endl;
    return 0;
}