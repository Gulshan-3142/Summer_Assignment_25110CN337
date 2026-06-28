#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second largest element does not exist.");
        return 0;
    }

    int arr[n], i, j;
    printf("Enter value: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = INT_MIN;
    int second = INT_MIN;

    for (i = 0; i < n; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (second < arr[i] && a > arr[i])
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    {
        printf("Second largest element does not exist.");
    }
    else
    {
        printf("Second largest element: %d", second);
    }

    return 0;
}
