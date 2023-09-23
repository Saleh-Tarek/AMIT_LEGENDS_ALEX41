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
	unsigned short int result, var_2=0;
	printf("File scope identifier is global\nFor example:\nvar=%hu\nvar=%hu\nvar=%hu\n",var, var++, ++var);
	result= MyPrintfun(var_2);
	printf("File scope identifier is global\nFor example:\nvar=%hu\nresult=%hu\n",var, result);
	result= MyPrintfun(var_2);
	printf("File scope identifier is global\nFor example:\nvar=%hu\nresult=%hu\n",var, result);
result= MyPrintfun(var_2);
	printf("File scope identifier is global\nFor example:\nvar=%hu\nresult=%hu\n",var, result);
result= MyPrintfun(var_2);
	printf("File scope identifier is global\nFor example:\nvar=%hu\nresult=%hu\n",var, result);

	return 0;
}