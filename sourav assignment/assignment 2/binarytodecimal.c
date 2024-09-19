#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal using call by reference
void binaryToDecimal(int *binary, int *decimal)
{
    int base = 1, rem;

    while (*binary > 0)
    {
        rem = *binary % 10;     // Extract the last digit of the binary number
        *decimal += rem * base; // Add to decimal number (multiply by base 2^position)
        *binary = *binary / 10; // Remove the last digit
        base = base * 2;        // Increase the base value (2^position)
    }
}

int main()
{
    int binary, decimal = 0;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Call the function to convert binary to decimal
    binaryToDecimal(&binary, &decimal);

    // Print the converted decimal number
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}
