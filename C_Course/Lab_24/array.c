
#include <stdio.h>
int main()
{
	int i, arr[5];
	int * ptr = arr;
	for(i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));	
	}
	printf("\nnumber of array elements\r%lu\npointer size is %lu\r\n",(sizeof(arr)/sizeof(int)),sizeof(ptr));
	return 0;
}


/**
 * 
 * 
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




 * 
 * */