#include <stdio.h>

void BubbleSort(int ary[],int len)
{
	int i,j;
	int temp;
	
	for(i=0; i<len-1;i++)
	{
		for(j=0;j<(len-i)-1;j++)
		{
			if(ary[j]<ary[j+1])
			{
				temp=ary[j+1];
				ary[j+1]=ary[j];
				ary[j]=temp;
			}
		}
	}
}
int main()
{
	int arr[7];
	int i;

	for(i=0; i<7; i++)
	{
		printf("정수 입력:");
		scanf("%d",&arr[i]);
	}

	BubbleSort(arr,sizeof(arr)/sizeof(int));
	for(i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
