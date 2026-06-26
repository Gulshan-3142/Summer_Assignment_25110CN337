#include <stdio.h>

int main() {
   
   int digit, power ,product = 1;
   printf("Enter digit and power: ");
   scanf("%d %d",&digit,&power);
   
   int b = power;
   while(power!=0)
   {
       product *= digit;
       power--;
   }

    printf("%d^%d : %d",digit,b, product);
    
return 0;
}
