#include <stdio.h>

int main() {
    
    int n,i,sum=0;
    printf("Enter Nth number: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    
    printf("Sum of all: %d",sum);
    
    return 0; 
}
