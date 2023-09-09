/*
*
*
*/

#include <stdio.h>

int main(){


	int n1=1,n2=2,n3=3,max;
	max= (n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3));
	printf("Max = %d\n",max);


	return 0;
}
