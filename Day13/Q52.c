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

    int evenNumber = 0, oddNumber = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenNumber++;
        }
        else
        {
            oddNumber++;
        }
    }

    printf("Even Numbers: %d", evenNumber);
    printf("\nOdd NUmbers: %d", oddNumber);

    return 0;
}
