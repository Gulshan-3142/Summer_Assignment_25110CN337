#include <stdio.h>

int main()
{
    int n;

    printf("Enter Size of array: ");
    scanf("%d", &n);

    int arr[n], i;
    printf("Enter element: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
