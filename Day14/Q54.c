#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array is empty.");
        return 0;
    }

    int arr[n], i;
    printf("Enter value: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target, count = 0;
    printf("Enter Frequency element: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            count++;
        }
    }

    if (count)
    {
        printf("Frequency of %d: %d", target, count);
    }
    else
    {
        printf("%d is not found", target);
    }

    return 0;
}
