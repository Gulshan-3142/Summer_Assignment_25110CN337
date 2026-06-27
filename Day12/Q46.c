#include <stdio.h>
#include <math.h>

int Armstrong(int n)
{
    int remaindar, sum = 0, count = 0;
    int check = n;
    int temp = n;
    while (n != 0)
    {
        count++;

        n = n / 10;
    }

    while (temp != 0)
    {
        remaindar = temp % 10;

        sum = sum + pow(remaindar, count);
        temp = temp / 10;
    }
    if (check == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter to check number is Armstrong or Not: ");
    scanf("%d", &n);

    if (Armstrong(n))
    {
        printf("%d is an Armstrong Number.", n);
    }
    else
    {
        printf("%d is NOT an Armstrong Number.", n);
    }

    return 0;
}
