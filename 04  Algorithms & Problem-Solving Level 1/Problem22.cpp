#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
// Function to calculate area of circle inscribed in an isosceles triangle
// Given base (b) and equal side (a)
double inscribedCircleArea(double a, double b) {
    // Height from base to apex
    double h = sqrt(a * a - (b * b) / 4.0);
    // Area of triangle
    double area = (b * h) / 2.0;
    // Semi-perimeter
    double s = (a + a + b) / 2.0;
    // Radius of inscribed circle
    double r = area / s;
    // Area of circle
    return PI * r * r;
}

int main() {
    double a, b;
    cout << "Enter the length of the equal sides (a): ";
    cin >> a;
    cout << "Enter the length of the base (b): ";
    cin >> b;

    if (a <= 0 || b <= 0 || b >= 2 * a) {
        cout << "Invalid triangle dimensions." << endl;
        return 1;
    }

    double circleArea = inscribedCircleArea(a, b);
    cout << "Area of the inscribed circle: " << circleArea << endl;
    return 0;
}