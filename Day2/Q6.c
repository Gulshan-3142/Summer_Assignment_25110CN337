#include <stdio.h>

int main() {
    
    int n,r,sum=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        r = n%10;
        sum = r + sum*10; 
        n=n/10;
    }
    
    printf("number of digit: %d",sum);
    return 0; 
}
