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

    int target, found = 1;
    printf("Enter target element to search in array: ");
    scanf("%d",&target);

    for (i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            printf("%d found at index: %d",arr[i],i);
            found = 0;
            break;
        }
    }

       if(found)
        {
           printf("%d is not found",target);
        }

    return 0;
}
