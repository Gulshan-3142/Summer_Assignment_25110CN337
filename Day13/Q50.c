#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter value: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all element: %d", sum);
    printf("\nAverage: %.2f", (float)sum / n);

    return 0;
}
