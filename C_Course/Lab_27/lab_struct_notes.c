#include <stdio.h>
// Structure Declaration: 

//1-Old way to declare a struct
struct player
{
	int num;
	int score;
	char name[10];
};

//2-New way to declare a struct: A- using typedef
typedef struct player
{
	int num;
	int score;
	char name[10];
} Mystruct;

//2-New way to declare a struct: B- using typedef
struct player
{
	int num;
	int score;
	char name[10];
}var1, var2, var3;

typedef struct player Mystruct;



int main ()
{

	struct player var1={1 ,100, "Ahmed"}; //old way to definintion with initialization
	Mystruct var2 = {2, 90, "May"}; // New way A | B
	var1.num=3;
	var1.score=133;
	var1.name= "Mohamed";

	if(var1.num == var2.num)
	{
		printf("Hello\n");

		var1=var2;
		var3 = var1 + var2; 
	}
}
