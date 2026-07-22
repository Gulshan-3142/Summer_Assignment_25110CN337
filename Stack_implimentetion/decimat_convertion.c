#include <stdio.h>
#define maxsize 10

int stack[maxsize];
int top = -1;

int push(int n)
{
    top++;
    stack[top] = n;
    return 0;
}
int pop()
{
    int binary = stack[top];
    top--;
    return binary;
}

int main()
{
    int num, remaindar;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0\n");
    }
    else
    {
        while (num != 0)
        {
            remaindar = num % 2;
            push(remaindar);
            num = num / 2;
        }

        while (top >= 0)
        {
            printf("%d", pop());
        }
    }
    return 0;
}
