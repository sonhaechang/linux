#include <stdio.h>

int main()
{
	int arr[]={1,2,3,4,5};
	int i,total=0;
	int * ptr=&arr[4];

	for(i=0; i<5; i++)
	{
		total += *(ptr--);
	}
	
	printf("%d\n",total);
	return 0;
}
