#include<stdio.h>

int main()
{
    int n, first=0, second=1, sum=0;
    printf("Enter number of fibonaci series: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("%d ",sum);
        sum= first + second;
        first=second;
        second=sum;

    }

    return 0;
}
