/**
 * Another source file  but does not contain main() function.
 * Scope Rules
 * Tarek Saleh
 * Alex 41
 * 
 * */
#include <stdio.h>
/** 
 * Variable a and b are in function prototype scope,
 * as it is not declared in the function definition. 
 * **/
unsigned short int MyPrintfun(unsigned short int a,unsigned short int b)
{
	unsigned short int x;
	static unsigned short int count=0;
	x=a;
	x++;
	printf("The value of a out side the block scope is %d\n",a);
	printf("The value of variables b is %d\n",b);
	printf("The value of variables x is %d\n",x);

	/**
	 * 
	 * Block scope in which variable a value is decremented. 
	 **/
	{
		a--;
		int m =a;
	printf("The value of variable a in side the block scope is %d\n",a);
	printf("The value of variable m in side the block scope is %d\n",m);

	}

	printf("The value of a out side the block scope is %d\n",a);
	/**
	 * Using a variable that was declared inside a block scope. 
	 * can not access this variable to print it.
	 * */
	//printf("The value of variable m out side the block scope is %d\n",m);

	printf("The value of variables b is %d\n",b);
	printf("The value of variables x is %d\n",x);
	/**
	 *	Every time it enter the function, variable count start from 0 
	 * 	to solve this we use static keyword.
	 **/
	count++;
	printf("The time you have entered the function is: %hu\n",count);
	return (count);
}