#include <stdio.h>

// Function to swap two variables using call by reference
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // Store the value of x in temp
    *x = *y;   // Assign the value of y to x
    *y = temp; // Assign the value of temp (initial x) to y
}

int main()
{
    int a, b;

    // Input the two variables
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Print original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // Print swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
