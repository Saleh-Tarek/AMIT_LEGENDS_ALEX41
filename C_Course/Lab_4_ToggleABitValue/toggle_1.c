/*
==========================================================================================
Diploma     :   Legends of - Amit  Group 41
Target      :   C 
Name        :   
Program     :   Convert Decimal to Binary
Author      :   Tarek Saleh
==========================================================================================
Description :   
+
==========================================================================================
*/

/*-------------------------                                      ------------------------*/
/*---------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){

	int result,var_1, bit_num;

	printf("Please enter a postive integer\n");

	scanf("%d",&var_1);
	printf("Please enter a position to toggle\n");
	scanf("%d",&bit_num);
	//00000101 ---  ^ 5  
	result = var_1 ^(1<<bit_num);
	printf("The result is equal to %d\n",result);

	return 0;
}