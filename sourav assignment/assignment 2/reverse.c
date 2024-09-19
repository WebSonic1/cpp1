#include <stdio.h>

// Function to reverse the number using call by reference
void reverseNumber(int *num, int *reverse)
{
    while (*num != 0)
    {
        *reverse = *reverse * 10 + (*num % 10); // Extract the last digit and add to reverse
        *num = *num / 10;                       // Remove the last digit from the original number
    }
}

int main()
{
    int num, reverse = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num; // Store the original number for output

    // Call the function to reverse the number
    reverseNumber(&num, &reverse);

    // Print the reversed number
    printf("The reverse of %d is: %d\n", originalNum, reverse);

    return 0;
}
