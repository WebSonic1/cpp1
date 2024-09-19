#include <stdio.h>

// Function to find the largest and smallest elements using call by reference
void findLargestSmallest(int *arr, int n, int *largest, int *smallest)
{
    *largest = arr[0];  // Initialize largest with the first element
    *smallest = arr[0]; // Initialize smallest with the first element

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *largest)
        {
            *largest = arr[i]; // Update largest if current element is greater
        }
        if (arr[i] < *smallest)
        {
            *smallest = arr[i]; // Update smallest if current element is smaller
        }
    }
}

int main()
{
    int n, largest, smallest;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the largest and smallest elements
    findLargestSmallest(arr, n, &largest, &smallest);

    // Output the largest and smallest elements
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
