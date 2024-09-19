#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int num1, num2;

    // Prompt the user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform arithmetic operations and display results
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;

    // Check for division by zero
    if (num2 != 0)
    {
        cout << "Division: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
