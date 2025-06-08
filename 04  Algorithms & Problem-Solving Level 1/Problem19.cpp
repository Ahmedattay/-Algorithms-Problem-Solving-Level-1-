#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double diameter;
    cout << "Enter the diameter of the circle: ";
    cin >> diameter;

    double radius = diameter / 2.0;
    double area = PI * radius * radius;

    cout << "Area of the circle: " << area << endl;
    return 0;
}