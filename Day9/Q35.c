#include<stdio.h>
int main()
{
    char n,i,j;
    char k = 'A';
    printf("Enter last alphabet: ");
    scanf(" %c",&n);

    if(n>='a' && n<='z')
    {
        n = n - 32;
    }

    for(i='A'; i<=n; i++)
    {
        for(j='A'; j<=i; j++)
        {
            printf("%c ",k);
        }
        printf("\n");
        k++;
    }

    return 0;
}
