#include <stdio.h>

// Function to generate Fibonacci series using call by reference
void fibonacci(int *a, int *b, int *next)
{
    *next = *a + *b; // Calculate the next term
    *a = *b;         // Update a to the value of b
    *b = *next;      // Update b to the value of the next term
}

int main()
{
    int n, a = 0, b = 1, next, i;

    // Input the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", a, b); // Print the first two terms

    for (i = 3; i <= n; i++)
    { // Start from the 3rd term
        fibonacci(&a, &b, &next);
        printf("%d ", next); // Print the next term
    }

    return 0;
}
