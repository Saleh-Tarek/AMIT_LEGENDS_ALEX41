


#include <stdio.h>
int main()
{
	int x = 0x44332211;
	char * ptr = (char *)&x;
	if(*ptr == 0x44)
	{
		printf("The system is little endian\n");
	}
	else
	{
		printf("The system is big endian\n");
	}
	
	return 0;
}