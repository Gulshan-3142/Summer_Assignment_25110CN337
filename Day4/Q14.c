#include <stdio.h>

int main()
{
    int n, i = 1;
    int first = 0, second = 1, sum;

    printf("Enter position: ");
    scanf("%d", &n);

    if(n == 1)
        printf("Nth Fibonacci term = %d", first);

    else if(n == 2)
        printf("Nth Fibonacci term = %d", second);

    else
    {
        while(i <= n - 2)
        {
            sum = first + second;
            first = second;
            second = sum;
            i++;
        }

        printf("Nth Fibonacci term = %d", sum);
    }

    return 0;
}
