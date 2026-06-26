#include <stdio.h>

int fact(int x)
{
  if(x==0)
  {
  return 1;
  }
  else
  {
    return fact(x-1)*x;
   }
}

int main()
{
int n;
printf("Enter number: ");
scanf("%d",&n);

int b = fact(n);
printf("Factorial of %d: %d",n,b);

return 0;
}
