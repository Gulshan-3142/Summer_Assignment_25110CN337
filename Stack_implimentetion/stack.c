#include <stdio.h>
#define maxsize 10

int stack[maxsize];
int top = -1;

int peek()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element: %d", stack[top]);
    }

    return 0;
}
int push()
{
    if (top == maxsize - 1)
    {
        printf("Stack is overflow");
    }
    else
    {
        int n;
        printf("Enter Element: ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
    return 0;
}

int display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        int i = top;
        while (i >= 0)
        {
            printf("%d ", stack[i]);
            i--;
        }
        printf("\n");
    }
    return 0;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        int n;
        n = stack[top];
        printf("pop element: %d", n);
        top--;
    }
    return 0;
}

int main()
{
    int choise;
    do
    {
        printf("\n---------------------------Stack--------------------------");
        printf("\n1.push \n2.display \n3.pop \n4.peek \n5.Exit");
        printf("\n---------------------------Stack--------------------------");
        printf("\nEnter your choise: ");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choise\n");
        }

    } while (choise != 5);

    return 0;
}
