
#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,b;
    int count=0,remainder=0,sum=0;

    printf("Enter number to check Armstong or Not: ");
    scanf("%d",&n);

    b=a=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }

    while(a!=0)
    {
        remainder = a%10;
        sum = sum + pow(remainder,count);
        a=a/10;
    }

    if(sum==b)
    {
        printf("%d is a Armstrong number",b);
    }
    else
    {
        printf("%d is a not Armstrong number",b);
    }

    return 0;
}
