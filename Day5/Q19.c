#include<stdio.h>
#include<math.h>

int main()
{
    int n,m;

    printf("Enter to find factor: ");
    scanf("%d",&n);

    m=n;
    while(n!=0)
    {
        if(m%n==0 )
        {
            printf("%d ",n);
        }

        n--;
    }

    

    return 0;
}
