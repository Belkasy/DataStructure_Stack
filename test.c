/*
 *@name     test.c
 *@author   Abdelrahman Belkasy
 *@date     14 August 2022
 *Version   1.0
*/

#include <stdio.h>
#include "Stack.h"

int main()
{
    stack_st *stack ;//= Stack_create();
    int x[100];
    int y[100];
    Stack_print(stack);

    for (int i = 0; i < 100; i++)
    {
        x[i] = i+5;
        Stack_push(stack, x[i]); 
    }
    printf("Stack top >> %d\n", Stack_get_top(stack));
    Stack_print(stack);
        printf("----------------------------------------------\n");
    for (int i = 0; i < 100; i++)
    {
        Stack_pop(stack, &y[i]);
    }
    Stack_print(stack);
            printf("----------------------------------------------\n");

    for (int i = 0; i < 100; i++)
    {
        Stack_push(stack, y[i]); 
    }
    printf("Stack top >> %d\n", Stack_get_top(stack));
    Stack_print(stack);
    return 0;
}   

/* 
Stack_print()                       >> Teasted  >> proplem when stack not vaild
Stack_create()                      >> Teasted

Stack_is_empty()                    >> Teasted
Stack_is_full()                     >> Teasted
Stack_get_top()                     >> Teasted

Stack_validity() > Stack_push()     >> Teasted
Stack_push()                        >> Teasted
Stack_validity() > Stack_pop()      >> Teasted
Stack_pop()                         >> Teasted

Stack_clear()                       >> Teasted  >> Give garpage data

*/