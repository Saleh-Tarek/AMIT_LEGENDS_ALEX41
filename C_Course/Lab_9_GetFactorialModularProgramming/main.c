/*
*
*
*/

#include <stdio.h>
#include "Factorial.h"

/* Function prototype */


int main(void)
{
	signed short int var, result;

	printf("Please enter a positive integer.\n");
	if(scanf("%hd",&var)!=1)
	{
		printf("Error, \n Invalid input. Please enter an integer value.\n");
		return 1;
	}
	if(var<0)
	{
		printf("Error, \n Invalid input, please enter a positive value.\n");
		return 1;
	}
/* Function Call */
	else 
	{
		result= GetFactorial(var);
		printf("The factorial of value %hd is %hd\n",var,result);
	}
	return 0;
}

