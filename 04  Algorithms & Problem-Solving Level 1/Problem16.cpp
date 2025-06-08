#include <iostream>
#include <cmath> // For sqrt function
using namespace std;
int main(){
    double side, diagonal;
    cout << "Enter the length of the rectangle's side: ";
    cin >> side;
    cout << "Enter the length of the rectangle's diagonal: ";
    cin >> diagonal;

    // The other side can be found using Pythagoras: diagonal^2 = side^2 + other_side^2
    double other_side = sqrt(diagonal * diagonal - side * side);

    double area = side * other_side;
    cout << "The area of the rectangle is: " << area << endl;




}