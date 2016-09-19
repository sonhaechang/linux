#include <stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6};
	int i,temp;
	int * fptr=&arr[0];
	int * bptr=&arr[5];

	for(i=0; i<3; i++)
	{
		temp=*fptr;
		*fptr=*bptr;
		*bptr=temp;
		fptr++;
		bptr--;
	}
	for(i=0; i<6; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
} 
