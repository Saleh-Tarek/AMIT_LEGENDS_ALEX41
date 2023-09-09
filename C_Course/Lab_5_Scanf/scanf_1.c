/**/



#include <stdio.h>
int main(){
	
	int var_1;
	printf("Enter a postive number please.\n");
	if(scanf("%d",&var_1)==1)
	{
		printf("The input is %d\n",var_1);
	}
	else
	{
		printf("Invalid Input.\n");
	}

	return (0);
}
