#include <stdio.h>

int main()
{
	int arr[]={1,2,3,4,5};
	int i;
	int * ptr=arr;

	for(i=0; i<5; i++)
	{
		*ptr += 2;
		ptr++;
	}
	for(i=0; i<5; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
