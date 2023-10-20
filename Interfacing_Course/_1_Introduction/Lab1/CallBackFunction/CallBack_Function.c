/*
 ============================================================================
 Name        : CallBackFunction.c
 Description : 
 ========================================================
 Create a Function called MyPrint() and use printf inside it
 * In the main file, declare a pointer to function
 * Assign the 'Pointer to function' to print
 * call the function that takes a ptr to functino as an argument
Expected Output:
 * Printing what's inside function print
 ============================================================================
*/
#include <stdio.h>
#include <stdlib.h>

void MyPrint();
void CallBackFunction(void (*Copy_PF_CallBack)());
void (*PointertoFunction)();

int main(int argc, char *argv[])
{
    PointertoFunction=MyPrint;
    CallBackFunction(PointertoFunction);
    return 0;
}

void MyPrint(){
printf("inside the callback\n");
}

void CallBackFunction(void (*Copy_PF_CallBack)()){
    Copy_PF_CallBack();
}
