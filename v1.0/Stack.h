/*
 *@name     Stack.h
 *@author   Abdelrahman Belkasy
 *@date     14 August 2022
 *Version   1.0
*/
#ifndef _STACK_H
#define _STACK_H
/*
------------------------------------------------------------------
!-                        Stack defines
------------------------------------------------------------------
*/
#define STACK_SIZE 1000

typedef struct stack_st {
    int *stack_elements;
    int stack_top ;
} stack_st;

/*
------------------------------------------------------------------
!-                        Stack Prototypes
------------------------------------------------------------------
*/
/* *@defgroup Stack main fuctions */
stack_st *Stack_create(void);
int Stack_push(stack_st *stack, int data);
int Stack_pop(stack_st *stack, int *data);
void Stack_clear(stack_st *stack);

/* *@defgroup Stack helper functions */
void Stack_print(stack_st *stack);
int Stack_get_top(stack_st *stack);
int Stack_is_full(stack_st *stack);
int Stack_is_empty(stack_st *stack);    
void Stack_validity(stack_st *stack);


#endif /* _STACK_H */