
int Linear_Search(int arr[], int size, int key)
{
	int i,j;

	for(i=0; i< size; i++)
	{
		if(arr[i]==key)
		{
			return (i+1);
		}
	}
}