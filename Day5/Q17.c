#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    m=n;
    while(n!=1)
    {
        if(m%n==0 )
        {
            sum = sum + m/n;
        }

        n--;
    }

    if(sum==m) printf("%d is a Perfact number",m);
    else printf("%d is Not a perfact",m);

    return 0;
}
