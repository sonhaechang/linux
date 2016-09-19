#include <stdio.h>

int main()
{
	int num, cnt=1;

	printf("정수 입력:");
	scanf("%d",&num);

	while(num>0)
	{
		printf("%d\n",cnt*3);
		cnt++;
		num--;
	}
	return 0;
}
