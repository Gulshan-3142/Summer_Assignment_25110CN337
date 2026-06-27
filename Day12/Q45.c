#include <stdio.h>

int palindrome(int n)
{
    int remandar, sum = 0;
    int rev = n;
    while (n != 0)
    {
        remandar = n % 10;
        sum = sum * 10 + remandar;
        n = n / 10;
    }

     if (rev == sum)
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
    printf(" Enter number to check palindrome: ");
    scanf("%d", &n);

    int a = palindrome(n);
    if (a)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
