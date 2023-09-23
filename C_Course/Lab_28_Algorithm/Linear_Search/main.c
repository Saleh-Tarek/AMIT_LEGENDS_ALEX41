#include <stdio.h>
#include <stdlib.h>
#include "Linear_Search.h"
int main()
{
	int arr[10];
	int Local_Size,i,target,result;
	printf("Please enter the array size, must be less than ten.\n");
	scanf("%d",&Local_Size);
	printf("Please enter the array elements.\n");
	for (i = 0; i < Local_Size; ++i)
	{
		printf("Element number %d:\n",i);
		scanf("%d",&arr[i]);
	}

	printf("Please enter the target\n");
	scanf("%d",&target);
	result =Linear_Search(arr,Local_Size,target);
	

	printf("Element was found in location %d \n",result);

	return 0;
}

/**
 * 
 * 	printf("Please enter the array size.\n");
	scanf("%d",&Local_Size);
	int * arrptr = malloc(Local_Size * sizeof(int));

 * 
 * */