#include <stdio.h>

int main()
{
	int x=8;
	int * ptr1= &x;
	int **ptr2= &ptr1;
	printf("x= %d, &x=%p, Ptr1=%p, *ptr1=%d, ptr2=%p, **ptr2=%d, *ptr2=%p",x,&x,ptr1,*ptr1,ptr2,**ptr2,*ptr2 );
	
	
	return 0;
}