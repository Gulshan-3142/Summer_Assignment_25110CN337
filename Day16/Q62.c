#include <stdio.h>

void frequency(int arr[], int n)
{
    int i, j, count;
    int visited[n]; 

    // Initialize visited array with 0
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        count = 1;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d : %d times\n", arr[i], count);
    }
}

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    frequency(arr, n);

    return 0;
}
