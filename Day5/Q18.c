#include<stdio.h>

int main()
{
    int n,m,rmd,prod=1,sum=0;
    
    printf("Enter number to check strong number or not: ");
    scanf("%d",&n);

    m=n;
    while(n!=0)
    {
        rmd = n%10;
        
        while(rmd!=0)
        {
           prod *= rmd;
           rmd--;
        }

        sum += prod;
        prod = 1;
        n=n/10;
    }

    if(sum==m)  printf("%d is a Strong number",m);
    else printf("%d is not a strong number",m);
    return 0;
}
