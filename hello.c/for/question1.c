#include <stdio.h>

int main()
{
	int i;
	int j;
	int total=0;

	printf("정수 2개 입력:");
	scanf("%d %d",&i,&j);
	
	for(; i<=j; i++)
	{
		total += i;
	}
	printf("결과:%d\n",total);
	return 0;
}
