#include <stdio.h>

// Function to print a right-angled triangle of stars using call by reference
void printStarPattern(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print a right-angled triangle of alphabets using call by reference
void printAlphabetPattern(int *n)
{
    char alphabet = 'A'; // Starting alphabet
    for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }
}

// Function to print a right-angled triangle of numbers using call by reference
void printNumberPattern(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print star pattern
    printf("\nStar Pattern:\n");
    printStarPattern(&n);

    // Print alphabet pattern
    printf("\nAlphabet Pattern:\n");
    printAlphabetPattern(&n);

    // Print number pattern
    printf("\nNumber Pattern:\n");
    printNumberPattern(&n);

    return 0;
}
