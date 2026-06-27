#include <stdio.h>

int main()
{
    int n, i, j, k, l;

    printf("Enter number of row print: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < i; k++)
        {
            printf("%d", k);
        }
        for (l = k; l >= 1; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}
