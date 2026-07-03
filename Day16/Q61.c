#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int xor1 = 0, xor2 = 0;

    // 1 se n+1 tak XOR
    for(i = 1; i <= n + 1; i++)
    {
        xor1 ^= i;
    }

    // Array ka XOR
    for(i = 0; i < n; i++)
    {
        xor2 ^= arr[i];
    }

    printf("Missing number = %d", xor1 ^ xor2);

    return 0;
}
