/**
 * Another source file  but does not contain main() function.
 * Scope Rules
 * Tarek Saleh
 * Alex 41
 * 
 * */
#include <stdio.h>
extern unsigned short int var; /* Global from another source file. */

unsigned short int MyPrintfun(unsigned short int a)
{
	static unsigned short int x=0;
	printf("The value of the external variable is %d\n",var);
	printf("The value of the sent argument is %d\n",a);
	printf("The value of the local variable is %d\n",x);
	var++;
	x++;
	a++;
	printf("The value of the external variable is %d\n",var);
	printf("The value of the sent argument is %d\n",a);
	printf("The value of the local variable is %d\n",x);
	return x;
}