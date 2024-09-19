#include <stdio.h>

// Function to count the digits of a number and store them in an array
void extractDigits(int *num, int *digits, int *count)
{
    while (*num != 0)
    {
        digits[*count] = *num % 10; // Extract the last digit
        *num = *num / 10;           // Remove the last digit
        (*count)++;                 // Increment the count of digits
    }
}

// Function to sort the digits array using Bubble Sort
void sortDigits(int *digits, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (digits[j] > digits[j + 1])
            {
                temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }
}

// Function to print the sorted number from the digits array
void printSortedNumber(int *digits, int count)
{
    printf("Sorted number: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", digits[i]);
    }
    printf("\n");
}

int main()
{
    int num, digits[10], count = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num; // Store the original number for output

    // Extract the digits from the number
    extractDigits(&num, digits, &count);

    // Sort the digits
    sortDigits(digits, count);

    // Print the sorted number
    printSortedNumber(digits, count);

    return 0;
}
