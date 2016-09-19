#include <stdio.h>

int N(int n)
{
	int k;
	int i=2;
	
	for(k=0;i<=n;k++)
	{
		i *= 2;
	}
	return k;
}
int main()
{
	int num;

	printf("상수 n 입력:");
	scanf("%d",&num);

	printf("공식을 만족하는 k의 최대값은:%d\n",N(num));
	return 0;
}	
