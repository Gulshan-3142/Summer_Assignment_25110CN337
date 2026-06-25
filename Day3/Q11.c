#include<stdio.h>

int main()
{
    int n,m,remandar;
    printf("Enter Two number: ");
    scanf("%d %d",&n,&m);


    while(remandar!=0)
    {
        remandar = n%m;
        n = m;
        m = remandar;
        
    }
    printf("GCD: %d ",n);
    return 0;
}
