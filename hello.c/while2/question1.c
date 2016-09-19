#include <stdio.h>

int main()
{
	int num=0;
	int i=0;
	int total=0;
	
	while(i<5)
	{
		while(num<=0)
		{
			printf("정수 입력(%d번째):",i+1);
			scanf("%d",&num);
		}
		
		total += num;
		num=0;
		i++;
	}
	printf("총 합:%d\n",total);
	return 0;
}
