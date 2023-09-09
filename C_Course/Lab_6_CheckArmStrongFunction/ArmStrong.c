/**
 * Program		:	Fine if a given number is an ArmStrong Number or not.
 * Assignment	:	ASG 2.2
 * Auther		:	Tarek Saleh
 * 
 * **/


#include<stdio.h>

int main()
{
	/**
	 * Sum and digits must be initialized with 0, 
	 * */
	signed short int Num, temp, sum=0, remainder, digits=0,Mult=1,i;
	printf("Please enter a positive integer number.\n");
	if(scanf("%hd",&Num)==1)
	{
		if(Num <= 0 )
		{
			printf("Invalid input.\nPlease enter a positive integer number.\n");
			return 1;
		}
		else
		{
			/**
			 * Write your code here.
			 * */
			temp = Num;
			printf("1_%hd\n",temp);

			while (temp!=0)
			{
				printf("2_%hd\n",temp);

				digits+=1;
				temp/=10;

			}
			printf("3_%hd\n",temp);
			/**
			 * There was a bug here. temp has reached 0 value.
			 * It needs reset again to Num value.
			 * */
			temp = Num;

			while(temp!=0)
			{
				printf("4_%hd\n",temp);

				remainder= temp%10;
				//sum+= checkArmStrong();
				/**
				 * Another bug:
				 * Mult value is comulated with old value.
				 * Mult need reset
				 * */
				Mult=1;
				for(i=1;i<=digits;i++)
				{
					Mult*= remainder;
					printf("Mult=%hd\n",Mult);

				}
				sum+=Mult;
				printf("Digits=%hd\n",digits);
				printf("Sum=%hd\n",sum);

				printf("Mult=%hd\n",Mult);
				temp/=10;
			}
			/**
			 * Mult  -> 1*1*1 =1
			 * Mult  -> 7*7*7 = 343
			 * Mult  -> 3*3*3 = 27
			 * Final Sum = 1+323+27  = 371 
			 * Because Final Sum = Num = 371:
			 * The Num 371 is an armstrong number.
			 *  */
			if(Num== sum)
			{
				printf("%hd is an Armstrong number.\n",Num);
			}
			else
			{
				printf("%hd is not an Armstrong number.\n",Num);

			}
		}
	}
	else
	{
		printf("Invalid input.\nPlease enter a positive integer number.\n");
		return 1;

	}
	return 0;
}