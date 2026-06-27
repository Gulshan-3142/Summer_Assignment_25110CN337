#include <stdio.h>

int SumOfDigit(int n)
{
   if (n == 0)
    {
        return 0;
    }

    return (n % 10) + SumOfDigit(n / 10);
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d ", SumOfDigit(n));

    return 0;
}
