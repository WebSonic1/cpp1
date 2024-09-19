#include <iostream>

using namespace std;

int main()
{
    int base, height;

    // Prompt the user for base and height
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    // Calculate the area of the triangle
    float areaTriangle = 0.5f * base * height;

    // Display the result
    cout << "The area of the triangle is: " << areaTriangle << endl;

    return 0;
}
