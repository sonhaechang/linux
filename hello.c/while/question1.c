#include <stdio.h>

int main()
{
	int num;

	printf("정수 입력:");
	scanf("%d",&num);

	while(num>0)
	{
		printf("hello word!\n");
		num--;
	}
	return 0;
}
