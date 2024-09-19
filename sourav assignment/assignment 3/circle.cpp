#include <iostream>

using namespace std;

int main()
{
    int radius;
    const float PI = 3.14f; // Using a simplified value for PI

    // Prompt the user for the radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area of the circle
    float areaCircle = PI * radius * radius;

    // Display the result
    cout << "The area of the circle is: " << areaCircle << endl;

    return 0;
}
