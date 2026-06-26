#include <stdio.h>
#include <math.h>

int main()
{
    int digit, binary, decimal = 0, power = 1;

    printf("Enter binary to convert into decimal: ");
    scanf("%d",&binary);

    while (binary != 0)
    {
        digit = binary % 10;
        decimal = decimal + (digit * power);
        power = power * 2;
        binary = binary / 10;
    }

    printf("%d ", decimal);

    return 0;
}
