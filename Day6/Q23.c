#include <stdio.h>
#include <math.h>

int main()
{
    int digit,remandar, sum = 0;

    printf("Enter decimal number to check bits: ");
    scanf("%d", &digit);

    while (digit != 0)
    {
        remandar = digit & 1;
        sum += remandar;

        digit = digit>>1;
    }

    printf("Number of bits: %d", sum);

    return 0;
}
