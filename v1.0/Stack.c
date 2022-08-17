/*
 *@file     Stack.c
 *@author   Abdelrahman Belkasy
 *@date     14 August 2022
 *Version   1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

/* 
------------------------------------------------------------------
!-                     Stack main fuctions
------------------------------------------------------------------
*/

stack_st *Stack_create(void)
{
    /* Allocate memory for stack*/
    stack_st *stack = (stack_st *)malloc(sizeof(stack_st));
    /* chek if allocation fails */
    Stack_validity(stack);  
    
    /* intialize stack top by -1 */
    stack->stack_top = -1;
    /* allocation for elements of stack*/
    stack->stack_elements = (int *) malloc((STACK_SIZE) *sizeof(int));    
    
    /* return stack */
    return stack;
}/* Stack_create() */


int Stack_push(stack_st *stack, int data)
{
    /* Stack is vild ?*/
    Stack_validity(stack);

    if (Stack_is_full(stack)) /* check if full */
     {
        /* print that stack is full */
        printf("Stack is full\n");
        
        /* return error state 1 */
        return 1;
     }
    else    /* if not full */
    {
        /* Stack top ++ */
        stack->stack_top += 1;

        /* take data and assin it into stack*/
        stack->stack_elements[stack->stack_top] = data;

        /* Return error state */
        return 0;
    }
}/* Stack_puch() */


int Stack_pop(stack_st *stack, int *data)
{
    Stack_validity(stack);

    if (Stack_is_empty(stack))
    {
        printf("Stack is empty\n");
        data = NULL;
        return 1;    
    }
    else
    {
        *data = stack->stack_elements[stack->stack_top];
        stack->stack_elements[stack->stack_top] = 0;
        stack->stack_top -= 1;
        return 0;
    }

} /* Stack_pop() */


void Stack_clear(stack_st *stack)
{
    Stack_validity(stack);
    free(stack->stack_elements);
    free(stack);
} /* Stack_clear() */

/*
------------------------------------------------------------------
!-                     Stack helper functions
------------------------------------------------------------------
*/

void Stack_print(stack_st *stack)
{
    Stack_validity(stack);
    if (Stack_is_empty(stack))
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = 0; i <= stack->stack_top; i++)
        {
            printf("%d \n", stack->stack_elements[i]);
        }

    }
}/* Stack_print( */


int Stack_get_top(stack_st *stack)
{
    return stack->stack_top;
} /* Stack_get_top() */


int Stack_is_full(stack_st *stack)
{
    return (stack->stack_top == ((STACK_SIZE-1)));
} /* Stack_is_full() */


int Stack_is_empty(stack_st *stack)
{
    return (stack->stack_top == -1);

} /* Stack_is_empty() */


void Stack_validity(stack_st *stack)
{
    if (stack == NULL) 
    {
        printf("Stack not valid\n");
        exit(1);
    }
    else 
    {
    }
}/* Stack_validity() */
