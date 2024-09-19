#include <stdio.h>

// Function to print the Fibonacci series
void fibonacci(int n)
{
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d", t1, t2);

    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main()
{
    int terms;

    // Asking user for input
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Calling the Fibonacci function
    fibonacci(terms);

    return 0;
}
