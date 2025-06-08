#include <iostream>
using namespace std;
int main()
{
    int FristGrade, SecondGrade, ThirdGrade;
    cout << "Enter the first grade: ";
    cin >> FristGrade;
    cout << "Enter the second grade: ";
    cin >> SecondGrade;
    cout << "Enter the third grade: ";
    cin >> ThirdGrade;
    int Average = (FristGrade + SecondGrade + ThirdGrade) / 3;
    cout << "The average of the three grades is: " << Average << endl;
    if (Average >= 60)
    {
        cout << "You passed!" << endl;
    }
    else
    {
        cout << "You failed." << endl;
    }
    return 0;
}