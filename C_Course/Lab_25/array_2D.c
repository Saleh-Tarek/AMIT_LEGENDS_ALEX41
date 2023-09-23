#include <stdio.h>

int main ()
{
	int arr [3][4]={{},{},{'\0'}};
	int i, j;
	printf("Please enter the array elements.\n");

	for(i=0; i<3; i++)
	{
		printf("Row number is%d\n",i);
		for(j=0;j<4;j++)
		{
			printf("Column number is%d\n",j);
			//arr[1][0]
			scanf("%d",&arr[i][j]);

		}
	}
		printf("The array elements are.\n");

		for(i=0; i<3; i++)
	{
		printf("Row number is%d\n",i);
		for(j=0;j<4;j++)
		{
			printf("Column number is%d\n",j);
			//arr[1][0]
			printf("%d\n",arr[i][j]);

		}
	}

arr[3][1]= 3;
	printf("End of the program.\n");

	return 0;
}