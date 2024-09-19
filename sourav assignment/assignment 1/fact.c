#include <stdio.h>

// Function to calculate factorial using call by value
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int number;

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calling the factorial function
    int result = factorial(number);

    // Printing the result
    printf("Factorial of %d is %d\n", number, result);

    return 0;
}
