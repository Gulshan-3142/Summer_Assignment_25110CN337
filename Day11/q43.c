#include <stdio.h>

int checkPrime(int n)
{
    int i, count = 1;
    if (n <= 1)
    {
       return 0;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count = 0;
            break;
        }
    }

    return count;
}

int main()
{
    int n;
    printf("Enter number to check prime or not: ");
    scanf("%d", &n);

    int prime = checkPrime(n);
    if (prime)
    {
        printf("prime number: %d", n);
    }
    else
    {
        printf("Not prime number: %d",n);
    }

    return 0;
}
