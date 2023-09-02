/*
*	Function	: Apply prefix, postfix, comma operator
*	Date		: 02/09/2023
*	Auther		: Tarek 
*/
#include <stdio.h>

int main(){

	unsigned short int x =10, y;

	y= (x++,printf("%u\n",x),++x,printf("%u\n",x),x++);

	printf("y= %u\n",y);
	printf("x= %u\n",x);

	printf("sizeof(x)= %lu\nsizeof(int)= %lu\nsizeof(short int)=%lu\nsizeof(long int)=%lu\nsizeof(3.0)=%lu\n",sizeof(x),sizeof(int),sizeof(short int),sizeof(long long int),sizeof(3.0));
	return 0;
}
