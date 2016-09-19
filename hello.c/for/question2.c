#include <stdio.h>

int main()
{
	int num;
	int i;
	int total=1;
	
	printf("정수 입력:");
	scanf("%d",&num);
	
	for(i=0; i<num; i++)
	{
		total *= i+1;
	}
	printf("n!=%d\n",total);
	return 0;
} 
