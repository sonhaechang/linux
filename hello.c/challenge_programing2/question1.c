#include <stdio.h>

void OddNum(int * ptr)
{
	int i;

	printf("홀수:");

	for(i=0; i<10; i++)
	{
		if(ptr[i]%2==0+1)
		{
			printf("%d,",ptr[i]);
		}
	}
	printf("\n");
}
void EvenNum(int * ptr)
{
	int i;

	printf("짝수:");
	
	for(i=0; i<10; i++)
	{
		if(ptr[i]%2==0)
		{
			printf("%d,",ptr[i]);
		}
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int i;

	for(i=0; i<10; i++)
	{
		printf("정수 입력:");
		scanf("%d",&arr[i]);
	}
	
	OddNum(arr);
	EvenNum(arr);

	return 0;
}
