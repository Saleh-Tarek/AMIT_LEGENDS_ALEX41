#include<stdio.h>

void Swap_elements(int * Copy_Fptr, int * Copy_Sptr)
{
	int  Local_Temp;

	Local_Temp 	= * Copy_Fptr;
	* Copy_Fptr = * Copy_Sptr;
	* Copy_Sptr	= Local_Temp;
}
void Selection_Sort(int arr[], int size)
{

	int i, j, min_index;
	printf("1\n");

	for(i=0; i<size-1; i++)
	{
	
		printf("2\n");

		min_index =i;
		for(j=i+1; j<size;j++)
		{
				printf("3\n");

			if(arr[j]< arr[min_index])
			{
					printf("4\n");

				min_index =j;
			}
				printf("5\n");

		}
		Swap_elements(&arr[min_index], &arr[i]);
	printf("6\n");

	}

}

