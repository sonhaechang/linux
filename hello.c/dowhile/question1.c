#include <stdio.h>

int main()
{
	int num=1;
	int total=0;

	while(num!=0)
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d",&num);
		total += num;
	}
	printf("합계:%d\n",total);
	return 0;
}
