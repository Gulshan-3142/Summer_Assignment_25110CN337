#include<stdio.h>

int sumFunt(int a,int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int a,b;
    printf(" Enter two number: ");
    scanf("%d %d",&a,&b);

    printf("Sum: %d + %d = %d ",a,b,sumFunt(a,b));

   return 0;
}
