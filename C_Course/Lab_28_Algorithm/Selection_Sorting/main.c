#include<stdio.h>
#include<stdlib.h>
#include"Selection_Sort.h"
int main()
{
	int arr[10];
	int Local_Size,i;
	printf("Please enter the array size.\n");
	scanf("%d",&Local_Size);
	int * arrptr = malloc(Local_Size * sizeof(int));
	printf("Please enter the array elements.\n");
	for (i = 0; i < Local_Size; ++i)
	{
		printf("Element number %d:\n",i);
		scanf("%d",&arrptr[i]);
	}

	Selection_Sort(arrptr,Local_Size);
	printf("Element after sorting are:\n");
for (i = 0; i < Local_Size; ++i)
	{
		printf("Element number %d = %d\n",i, arrptr[i]);
	}

	return 0;
}