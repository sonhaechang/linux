#include <stdio.h>

int main()
{
	int arr[]={1,2,3,4,5};
	int i;
	int * ptr=arr;

	for(i=0; i<5; i++)
	{
		*(ptr+i) += 2;
	}
	
	for(i=0; i<5; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
