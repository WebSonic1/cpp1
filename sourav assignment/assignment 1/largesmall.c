#include <stdio.h>

// Function to find the largest and smallest elements in the array
void findLargestSmallest(int arr[], int size)
{
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    // Print the largest and smallest elements
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
}

int main()
{
    int n;

    // Asking user for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Asking user for array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calling the function to find largest and smallest elements
    findLargestSmallest(arr, n);

    return 0;
}
