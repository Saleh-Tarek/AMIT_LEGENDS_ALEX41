
#include <stdio.h>
int main()
{
	int i, arr[5];
	int * ptr = arr;

	for(i=0;i<5;i++)
	{
		//scanf("%d",&arr[i]);
		scanf("%d",(ptr+i));
		
	}
	for(i=0;i<3;i++)
	{
	//	printf("arr[%d]=%d",i,arr[i]);
		printf("arr[%d]=%d",i,*(ptr+i));
	
	}



	return 0;
}
