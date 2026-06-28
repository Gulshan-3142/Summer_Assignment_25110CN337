#include <stdio.h>
#include <limits.h>
int main()
{

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter value: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (n <= 0)
    {
        printf("Array is empty.");
        return 0;
    }

    int largest = INT_MIN, smallest = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    printf("Largest: %d", largest);
    printf("\nSmallest: %d", smallest);

    return 0;
}
