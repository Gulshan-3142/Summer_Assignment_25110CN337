#include <stdio.h>
#include <math.h>

int fibonacci(int n)
{
    int i, first = 0, second = 1, sum = 0;

    if (n >= 1)
        printf("%d ", first);

    if (n >= 2)
        printf("%d ", second);

    for (i = 3; i <= n; i++)
    {
        sum = first + second;
        printf("%d ", sum);

        first = second;
        second = sum;
    }

    return sum;
}

int main()
{
    int n;
    printf("Enter to check number is Armstrong or Not: ");
    scanf("%d", &n);

    fibonacci(n);
    return 0;
}
