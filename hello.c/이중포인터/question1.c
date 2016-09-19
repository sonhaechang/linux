#include <stdio.h>

void MaxAndMin(int * arr, int size, int ** mxptr, int ** mnptr)
{
	int i;
	int *max,*min;

	max=&arr[0];
	min-&arr[0];

	for(i=0; i<size; i++)
	{
		if(*max<arr[i])	
			max=&arr[i];
		if(*min>arr[i])
			min=&arr[i];
	}
	*mxptr=max;
	*mnptr=min;
}

int main()
{
	int arr[5];
	int * maxptr;
	int * minptr;
	int i;

	for(i=0; i<5; i++)
	{
		printf("정수 입력:");
		scanf("%d",&arr[i]);
	}

	MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxptr, &minptr);
	printf("최대: %d, 최소: %d\n",*maxptr,*minptr);
	return 0;
}
