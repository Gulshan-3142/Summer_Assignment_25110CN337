#include <stdio.h>

int main()
{
    char n, i, j, k, l;

    printf("Enter number of row print: ");
    scanf(" %c", &n);

    if (n >= 'a' && n <= 'z')
    {
        n = n - 32;
    }

    for (i = 'A'; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (k = 'A'; k < i; k++)
        {
            printf("%c", k);
        }
        for (l = k; l >= 'A'; l--)
        {
            printf("%c", l);
        }

        printf("\n");
    }

    return 0;
}
