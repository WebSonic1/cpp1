#include <stdio.h>

// Function to reverse the given number
void reverseNumber(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
}

int main()
{
    int number;

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calling the reverseNumber function
    reverseNumber(number);

    return 0;
}
