#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

// Function to calculate the area of a triangle given its sides
double triangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to calculate the area of the circumscribed circle
double circumscribedCircleArea(double a, double b, double c) {
    double area = triangleArea(a, b, c);
    if (area == 0) return 0; // Degenerate triangle
    double R = (a * b * c) / (4.0 * area); // Circumradius
    return PI * R * R;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of third point (x3 y3): ";
    cin >> x3 >> y3;

    double a = distance(x2, y2, x3, y3);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x1, y1, x2, y2);

    double area = circumscribedCircleArea(a, b, c);

    if (area == 0)
        cout << "The points do not form a valid triangle." << endl;
    else
        cout << "Area of the circumscribed circle: " << area << endl;

    return 0;
}