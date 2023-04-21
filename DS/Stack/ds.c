
#include <stdio.h>
#include <stdlib.h>
#include "ds.h"




// functions implementation
/*
void createEmptyStack(ST_stack_t *stack)
{
    printf("Please enter the stack size: ");
    scanf("%hhu", &stack->size);

    stack->stack = (uint8_t*)calloc(stack->size, sizeof(uint8_t));
    stack->top = -1;
}

void push(ST_stack_t *stack, int32_t data)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->stack[stack->top] = data;
    }
    else
    {
        printf("\nstack overflow\n");
    }
}

uint8_t pop(ST_stack_t *stack)
{
    uint8_t x = -1;
    if(!isEmpty(stack))
    {
        x = stack->stack[stack->top];
        stack->top--;
    }
    else
    {
        printf("\nstack is empty\n");
    }

    return x;
}

uint8_t isEmpty(ST_stack_t *stack)
{
    if(stack->top == -1)
    {
        return 1;
    }

    return 0;
}

uint8_t isFull(ST_stack_t *stack)
{
    if(stack->top == stack->size-1)
    {
        return 1;
    }

    return 0;
}

uint8_t printStack(ST_stack_t *stack)
{
    for(uint8_t i=0; i<=stack->top; i++)
    {
        printf("%d  ", stack->stack[i]);
    }
    printf("\n");
}

uint8_t getStackTop(ST_stack_t *stack)
{
    if(isEmpty(stack))
    {
        return -1;
    }

    return stack->stack[stack->top];
}

uint8_t peak(ST_stack_t stack, uint8_t position)
{
    uint8_t temp = -1;
    if(stack.top-position+1 < 0)
    {
        printf("\ninvalid position, please try again\n");
    }
    else
    {
        temp = stack.stack[stack.top-position+1];
    }

    return temp;
}
 */