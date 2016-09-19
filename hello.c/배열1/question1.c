#include <stdio.h>

int main()
{
	int arr[5];
	int i,max,min;
	int total=0;

	for(i=0;i<5;i++)
	{
		printf("정수 입력:");
		scanf("%d",&arr[i]);
		
		max=arr[0];
		min=arr[0];

		total+=arr[i];

		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("최댓값:%d\n",max);
	printf("최솟값;%d\n",min);
	printf("총 합:%d\n",total);
	return 0;
}
