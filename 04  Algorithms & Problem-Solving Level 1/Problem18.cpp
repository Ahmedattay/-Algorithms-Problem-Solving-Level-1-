#include <iostream>
using namespace std;
#include <cmath>

int main() {
    const double PI = 3.141592653589793;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius;

    cout << "Area of the circle = " << area << endl;

    return 0;
}