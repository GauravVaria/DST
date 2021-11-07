#include <stdio.h>

int push(int stack[10], int top);
int pop(int stack[10], int top);

int main()
{
    int top=-1, stack[10]; // top = -1 as top++ in push
    top = push(stack,top);
    top = push(stack,top);
    top = push(stack,top);
    top = pop(stack,top);
    top = pop(stack,top);
    top = push(stack,top);
    top = push(stack,top);

    printf("Stack:");
    for ( int i = 0; i < 10; i++)
    {
        printf(" %d",stack[i]);
    }
    
    return 0;
}

int push(int stack[10], int top) {

    int val;
    printf("Enter Value to be Pushed: ");
    scanf("%d", &val);

    if (top==9) {
        printf("\nOverflow");
    }
    else {
        top++;
        stack[top] = val;
        return top;
    }        
}

int pop(int stack[10], int top) {

    int val;

    if (top==-1) {
        printf("\nUnderflow");
    }
    else {
        val = stack[top];
        top--;
        printf("Popped value: %d\n", val);
        return top;
    } 
}