#include <stdio.h>

int main() {
    
    int n,m,r,sum=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    m=n;
    while(n!=0)
    {
        r = n%10;
        sum = r + sum*10; 
        n=n/10;
    }
    
    if(sum==m)
    {
    printf("\n%d is a palindrome number",sum);
    }
    else
    {
     printf("\n%d is not palindrome number",sum);
    }
    return 0; 
}
