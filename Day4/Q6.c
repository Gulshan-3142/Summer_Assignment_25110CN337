#include <stdio.h>
#include <math.h>

int main()
{
    int n, b, sum = 0, i = 0;
    printf("Enter decimal number to convert into binary: ");
    scanf("%d", &n);

    while (n != 0)
    {
        b = n & 1;
        sum = sum + b * pow(10, i);
        n = n >> 1;
        i++;
    }
    printf("%d ", sum);
    return 0;
}
