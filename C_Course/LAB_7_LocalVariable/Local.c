/**
 * 
 *  Local variable scope
 * **/


#include<stdio.h>




 int main()
{
	
	int x =5;
	int y;
	y = 10;
	{
	 	int z =12;
	 printf("Inside a scope x= %d y= %dz=%d\n",x,y,z);

	 	x=  z;
	 printf("Inside a scope x= %d y= %dz=%d\n",x,y,z);

	}

	 printf("Inside a scope x= %d y= %d\n",x,y);
	/* code */
	return 0;
}