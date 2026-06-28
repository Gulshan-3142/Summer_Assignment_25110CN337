#include <stdio.h>

int main()
{

    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array is empaty.");
        return 0;
    }

    int arr[n], i, j;
    printf("Enter value: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        int count = 1;

        int found = 0;

        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            continue;
        }


        for (j = i+1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            printf("%d : duplicate %d times", arr[i], count);
            printf("\n");
        }
    }

    

    return 0;
}
