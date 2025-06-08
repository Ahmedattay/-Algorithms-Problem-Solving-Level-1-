#include <iostream>
using namespace std;

char getGrade(int score) {
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else if (score >= 50)
        return 'E';
    else
        return 'F';
}

int main() {
    int score;
    cout << "Enter the score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a value between 0 and 100." << endl;
        return 1;
    }

    char grade = getGrade(score);
    cout << "Grade: " << grade << endl;

    return 0;
}