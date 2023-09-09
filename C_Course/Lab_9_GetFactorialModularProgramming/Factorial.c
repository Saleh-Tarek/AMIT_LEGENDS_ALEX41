 /* Source file  */
/*  Recursive Function Definition */
int GetFactorial(int num)
{
	/* Base condition */
	if( num == 1 || num == 0)
	{
		return 1;
	}
	else
	{
		return (num* GetFactorial(num-1));
	}
}







