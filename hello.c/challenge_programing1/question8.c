#include <stdio.h>

int N(int n)
{
	if(n==0)
		return 1;
	else
		return 2 * N(n-1);
}
int main()
{
	int num;
	
	printf("정수 입력");
	scanf("%d",&num);

	printf("2^%d=%d\n",num,N(num));
	return 0;
}
