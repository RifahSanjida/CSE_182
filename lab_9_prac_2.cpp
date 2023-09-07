//Practice Exercise 2: Write a C++ program to find the diameter, circumference, and area of a circle using functions.
#include <iostream>
#include<math.h>
using namespace std;
float Diameter(float radius)
{
    return 2 * radius;
}
float Circumference(float radius)
{
    return 2 * M_PI * radius;
}
float Area(float radius)
{
    return M_PI *radius * radius;
}
int main()
{
    float radius, diameter, circumference, area;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    diameter = Diameter(radius);
    circumference = Circumference(radius);
    area = Area(radius);
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
    return 0;
}
