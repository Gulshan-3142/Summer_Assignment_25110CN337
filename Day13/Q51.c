#include <stdio.h>

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

    int smallest = arr[0], largest = arr[0];
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
