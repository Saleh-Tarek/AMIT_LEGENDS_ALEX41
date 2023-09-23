#include <stdio.h>
int main()
{
	char arr[]="geeks";
	scanf("%s",arr);
	char arr_1[4]="heeks";
	char arr_3[]={'d','e','e','k','s'};
	printf("%lu\n",sizeof(arr_3));
	printf("%lu\n",sizeof(arr_1));
	printf("%lu\n",sizeof(arr));
        printf("%s\n",arr);
        printf("%s\n",arr_1);
        printf("%s\n",arr_3);

	return 0;
}
