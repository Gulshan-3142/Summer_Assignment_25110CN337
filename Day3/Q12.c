#include<stdio.h>

int main()
{
    int n,m,a,b,lcm,remandar;
    printf("Enter Two number: ");
    scanf("%d %d",&n,&m);

    a=n;
    b=m;
    while(remandar!=0)
    {
        remandar = n%m;
        n = m;
        m = remandar;
        
    }

    lcm = a*b/n;
    printf("LCM: %d ",lcm);
    
    return 0;
}
