#include <stdio.h>
#include <string.h>
#define maxsize 10

char stack[maxsize];
int top = -1;

void push(char c)
{
    top++;
    stack[top] = c;
}

int pop()
{
    int n = stack[top];
    top--;
    return n;
}

int Empty()
{
    return top == -1;
}

int match(char open, char close)
{
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    return 0;
}

int balance(char expr[])
{
    int i;
    int len = strlen(expr);

    for (i = 0; i < len; i++)
    {
        char ch = expr[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (Empty() != 0)
            {
                return 0;
            }

            char top_element = pop();

            if (match(top_element, ch) != 1)
            {
                return 0;
            }
        }
    }
    return Empty();
}

int main()
{
    char expr[maxsize];

    printf("Enter an expression: ");
    scanf("%s", expr);

    if (balance(expr))
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Not Balanced\n");
    }

    return 0;
}
