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
	printf("File scope identifier is global\nFor example:\nvar=%hu\nvar=%hu\n",var, ++var);
	result = MyPrintfun(var,var+1);
	printf("The result variable after the function call is:\n%hu\n",result);

	result = MyPrintfun(var,var+1);
	printf("The result variable after the function call is:\n%hu\n",result);

	result = MyPrintfun(var,var+1);
	printf("The result variable after the function call is:\n%hu\n",result);
	
	return 0;
}