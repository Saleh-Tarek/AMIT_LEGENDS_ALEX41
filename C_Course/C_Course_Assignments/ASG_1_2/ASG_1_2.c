/**
 *	Program Name			:	ASG_1_2.c
 * 	Program Function		:	Toggle to a certain bit
 * 	Program	Auther			:	Tarek Saleh
 * 	Program writing Date	:	03/09/2023
 *  */

#include <stdio.h>

int main(){
	int number, result=0;
	unsigned short int bitnum;
	printf("Please Enter an integer number.\n");
	scanf("%d",&number);
	printf("Enter bit number to toggle from 0 to 31.\n");
	scanf("%hu",&bitnum);
	result = number ^ (1<<bitnum);
	if(result != 0)
	{
		printf("bit toggled successfully.\n");
		printf("Number before toggling %hu bit is: %d\n",bitnum,number);
		printf("Number after toggling %hu bit is: %d\n",bitnum,result);
	}	
	return 0;
}
