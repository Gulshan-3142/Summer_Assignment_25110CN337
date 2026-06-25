#include <stdio.h>

int main()
{
    int n, m, i;

    printf("Enter to find factor: ");
    scanf("%d", &n);

    m = n;
    while (n != 0)
    {
        if (m % n == 0)
        {
            int prime = 1;
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime==1 && n>1) printf("%d ",n);
        }
        n--;
    }

    return 0;
}
