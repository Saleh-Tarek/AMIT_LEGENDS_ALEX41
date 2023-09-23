/**


*/

#include<stdio.h>

int main (){

	int x =10;
	int * ptr;
	ptr = &x;
	*ptr =20; // dereferencing	
	printf("x =%d, &x=%p, ptr = %p, *ptr= %d, &ptr =%p",x,&x,ptr,*ptr,&ptr);

	return 0;
}