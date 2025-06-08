#include <iostream>
using namespace std;
float ReadSquareSide()
{
    float side;
    using namespace std;
    cout << "Enter the length of the square's side: ";
    cin >> side;
    return side;
}

float CalculateInscribedCircleArea(float squareSide)
{
    const float PI = 3.14159265358979323846f;
    float radius = squareSide / 2.0f;
    return PI * radius * radius;
}

int main()
{
    using namespace std;
    float squareSide = ReadSquareSide();
    float circleArea = CalculateInscribedCircleArea(squareSide);

    cout << "Area of the inscribed circle = " << circleArea << endl;
    return 0;
}