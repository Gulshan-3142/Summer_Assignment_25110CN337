#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,remandar=0;

    printf("Enter number: ");
    scanf("%d %d",&a,&b);

    while(b!=0)
    {
        remandar = a%b;
        a = b;
        b = remandar;
    }

    printf("GCD:  %d",a);

    return 0;
}
