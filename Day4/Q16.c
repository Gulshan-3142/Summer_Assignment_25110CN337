#include<stdio.h>
#include<math.h>

int main()
{
    int start,end,n,count=0;
    printf("Enter start: ");
    scanf("%d",&start);

    printf("Enter end: ");
    scanf("%d",&end);

    n=end;
    while(n!=0)
    {
        count++;
        n=n/10;
    }

    for(int i=start; i<=end; i++)
    {
        int temp = i;
        int b = temp;
        int sum = 0;
        int rem = 0;
        while(temp!=0)
        { 
        rem= temp%10;
        sum= sum + pow(rem,count);
        temp= temp/10;
        }
       
       
        if(sum==b)
        {
            printf("%d ",sum);
        }
    }

    return 0;

}
