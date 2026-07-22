#include <stdio.h>
#include <string.h>
#define maxsize 10

char stack[maxsize];
int top = -1;

int push(char ch)
{
    top++;
    stack[top] = ch;

    return 0;
}
int pop()
{
    char n = stack[top];
    top--;

    return n;
}
int main()
{
    char a[maxsize];
    printf("Enter string to find revarse: ");
    scanf("%s", a);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        push(a[i]);
    }
    while (top >= 0)
    {
        printf("%c", pop());
    }

    return 0;
}
