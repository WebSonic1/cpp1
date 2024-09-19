#include <stdio.h>

// Function to print star pattern
void starPattern(int rows)
{
    printf("Star Pattern:\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print alphabet pattern
void alphabetPattern(int rows)
{
    printf("\nAlphabet Pattern:\n");
    char alphabet = 'A';
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", alphabet++);
            if (alphabet > 'Z')
            {
                alphabet = 'A'; // Reset to 'A' after 'Z'
            }
        }
        printf("\n");
    }
}

// Function to print number pattern
void numberPattern(int rows)
{
    printf("\nNumber Pattern:\n");
    for (int i = 1; i <= rows; i++)
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
    int rows;

    // Asking user for input
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Calling functions to print different patterns
    starPattern(rows);
    alphabetPattern(rows);
    numberPattern(rows);

    return 0;
}
