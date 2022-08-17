# DataStructure_Stack
An implementation for stack data structure using C Programing
Implementation of v1.0 at 15 Aug 2022

# Files
    v1.0  -> Stack.c
          -> Stack.h
          -> test.c 

# Implement functions	
	  Main functions:	
        stack_st *Stack_create(void);
        int Stack_push(stack_st *stack, int data);
        int Stack_pop(stack_st *stack, int *data);
        void Stack_clear(stack_st *stack);
	  Utalities Functions:	
        void Stack_print(stack_st *stack);
        int Stack_get_top(stack_st *stack);
        int Stack_is_full(stack_st *stack);
        int Stack_is_empty(stack_st *stack);    
        void Stack_validity(stack_st *stack);
