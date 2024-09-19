#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int num1, num2, temp;

    // Prompt the user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Print the original numbers
    cout << "Before swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Print the swapped numbers
    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
