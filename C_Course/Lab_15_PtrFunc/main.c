/*
 ============================================================================
 Name        : Lab15.c 
 ========================================================
 Description+

 * Create a Function called print() and use printf inside it
 * In the main file, declare a pointer to function
 * Assign the 'Pointer to function' to print
 * call the function that takes a ptr to functino as an argument
   Expected Output:
 * Printing what's inside function print
 ============================================================================
*/

#include <stdio.h>
//#include <stdlib.h>
#include "CallBackFun.h"

/**
 * was declared inside the header file, no need to take it here.
 * let us move it back to the CallBackFun.c
 * Or you can leave it in the header file, your choise.
 * */
extern void (*PtrFun)();

/**
 *  Global pointer to function of type void. 
 **/
void (*PtrFun)();

int main(void)
{
    /**
     * Pointer to function takes the address of a function: function name.
     * */
    PtrFun=MyPrintf;

    /**
     * The callBackFun takes the pointer to function as an argument. 
     * returns nothing.
     * */
    CallBackFun(PtrFun);
    return 0;
}
