#include <stdio.h>

struct player
{

	char score;
	int num;
	char name[10];
	long int x;
};


int main()
{
	struct player obj1= {7, 100};
	struct player *ptr; 

	/* 
	* pointer that points to a variable or object 
	* of struct player data type
	*/
	ptr = &obj1;
	
	int x=5;
	int *ptr_x;
	ptr_x=&x;

	*ptr_x = 8;

	printf("%d\n",sizeof(obj1));

	printf("%d\n",sizeof(long int));
	printf("Enter player number\n");
	scanf("%d",&obj1.num);
	printf("%d\n",obj1.num);
	printf("%d\n",obj1.score);
	//printf("%s\n",obj1.name);
	obj1.num=10;
	printf("%d\n",obj1.num);
	(*ptr).num =5;
	printf("%d\n",obj1.num);
	ptr->num =4;
	printf("%d\n",obj1.num);

	return 0;
}
