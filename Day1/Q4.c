#include <stdio.h>

int main() {
    
    int n,remand,count=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        remand = n%10;
        count++;
        n=n/10;
    }
    
    printf("number of digit: %d",count);
    return 0; 
}
