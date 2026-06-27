#include <stdio.h>

int findfactorial(int n)
{
    int factorial = 1;

    if (n < 1)
    {
        return -1;
    }
    while (n != 0)
    {
        factorial = factorial * n;
        n--;
    }

    return factorial;
}

int main()
{
    int n;
    printf("Enter number to check prime or not: ");
    scanf("%d", &n);

    int ans = findfactorial(n);
    if (ans == -1)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        printf("Factorial of %d is = %d ", n, ans);
    }

    return 0;
}
