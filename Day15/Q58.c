#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array is empty: ");
        return 0;
    }

    int arr[n], i, j;
    printf("Enter value: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rotate;
    printf("Enter number of rotation: ");
    scanf("%d", &rotate);

    int k = rotate % n;
    int secondStart = k;
    int leftStart = 0, leftEnd = k - 1, rightStart = 0, rightEnd = n - 1;
    while (leftStart < leftEnd)
    {

        int temp = arr[leftStart];
        arr[leftStart] = arr[leftEnd];
        arr[leftEnd] = temp;
        leftStart++;
        leftEnd--;
    }

    while (secondStart < rightEnd)
    {

        int temp = arr[secondStart];
        arr[secondStart] = arr[rightEnd];
        arr[rightEnd] = temp;
        secondStart++;
        rightEnd--;
    }

    int leftStart = 0, rightEn = n - 1;
    while (leftStart < rightEnd)
    {

        int temp = arr[leftStart];
        arr[leftStart] = arr[rightEnd];
        arr[rightEnd] = temp;
        leftStart++;
        rightEnd--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
