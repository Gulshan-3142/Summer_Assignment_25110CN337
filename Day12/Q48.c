#include <stdio.h>

int perfectNumber(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter to check number is Armstrong or Not: ");
    scanf("%d", &n);

    if (perfectNumber(n))
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
    return 0;
}
