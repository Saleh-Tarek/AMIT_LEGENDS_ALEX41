/**
 * 
 *  Local variable scope
 * **/


#include<stdio.h>

/* Function Declaration */

//void MyPrint(void);
void  MyPrint(void)
{
	printf("Hello and Welcome.\n");

	printf("Please enter two integer values.\n");

}

void MyValuePrint(int x , int y);

void SwapFun(int * , int * );



//int MyPrint(void);

//int MyValuePrint(int x , int y);

 int main()
{
	int var1, var2;
	MyPrint();
	scanf("%d %d",&var1 ,&var2);
	/* Function Swap call */
	//SwapFun(var1,var2);
	// printing the orginal values before swap
	MyValuePrint(var1,var2);
	// printing the orginal values after swap
	SwapFun(&var1,&var2);
	// As if i am sending the addresses
	// printing the addresses of the orginal values
	//MyValuePrint(&var1,&var2);
	printf("Address of var1 = %p, add of var2 = %p\n",&var1,&var2);
	//MyValuePrint(100,222);

	return 0;
}

	void MyValuePrint(int x , int y)
	{
		printf("The value you sent are:\n Value1 = %d, Value2 =%d\n",x,y);

	}

/* Function Definition */
void SwapFun(int* num1, int *  num2)
{

	int temp;
	temp = * num1;
	* num1 = * num2;
	* num2 = temp;
	//printf("The values inside the SwapFun is\n num1 = %d, num2=%d", num1, num2);
	//MyValuePrint(*num1,*num2);

} 