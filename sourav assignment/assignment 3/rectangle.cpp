#include <iostream>

using namespace std;

int main()
{
    int length, width;

    // Prompt the user for length and width
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    // Calculate the area of the rectangle
    int areaRectangle = length * width;

    // Display the result
    cout << "The area of the rectangle is: " << areaRectangle << endl;

    return 0;
}
