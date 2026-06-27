#include<stdio.h>
#include<string.h>

int main()
{
    char n,i,j;

    printf("Enter last alphabet: ");
    scanf(" %c",&n);

    if(n >= 'a' && n <= 'z')
    {
        n = n - 32;
    }
    for(i='A'; i<=n; i++)
    {
        for(j='A'; j<=i; j++)
        {
           printf("%c",j);
           
        }
        printf("\n");
    }

    return 0;
}
