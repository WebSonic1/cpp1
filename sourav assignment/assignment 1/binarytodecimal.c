#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary)
{
    int decimal = 0, base = 1, last_digit;

    while (binary > 0)
    {
        last_digit = binary % 10;
        decimal += last_digit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

int main()
{
    int binary, decimal;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Call by value: passing binary number to function
    decimal = binaryToDecimal(binary);

    // Output the result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
