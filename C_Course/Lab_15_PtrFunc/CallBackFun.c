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
 * Printing what's inside function print.

 ============================================================================
*/
#include <stdio.h>
//#include <stdlib.h>


void MyPrintf()
{
    printf("Now you're inside the callback\n");
}

void CallBackFun(void (*callback)())
{
    callback();
}
