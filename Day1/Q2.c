#include <stdio.h>

int main() {
    
    int n,i,t;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=1; i<=10; i++)
    {
        t = n*i;
        printf("\n%d*%d=%d",n,i,t);
    }
    
    return 0; 
}
