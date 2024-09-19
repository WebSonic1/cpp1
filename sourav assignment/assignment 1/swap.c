#include <stdio.h>

// Function to swap values using call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function - After swap: a = %d, b = %d\n", a, b); // values swapped inside the function
}

int main()
{
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);                                   // values passed by value (copy of x and y)
    printf("After swap: x = %d, y = %d\n", x, y); // no change as it's call by value

    return 0;
}
