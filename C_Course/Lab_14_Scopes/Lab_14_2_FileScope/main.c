/**
 * Scope Rules
 * Tarek Saleh
 * 13/09/2023
 * Alex_41
 * Lab_14_1
 * */


#include <stdio.h>
#include "file_scope.h"
unsigned short int var; /* Global*/

int main(void)
{
	unsigned short int result;
	printf("File scope identifier is global\nFor example:\nvar=%hu\nvar=%hu\nvar=%hu\n",var, var++, ++var);
	result = MyPrintfun(var);
	printf("The values of the global variable and result variable after the function call are:\n%hu\n%hu\n",var,result);
	
	return 0;
}