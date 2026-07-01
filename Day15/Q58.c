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

    int Start = 0, End = n - 1;
    while (Start < End)
    {

        int temp = arr[Start];
        arr[Start] = arr[End];
        arr[End] = temp;
        Start++;
        End--;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
