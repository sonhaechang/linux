#include <stdio.h>

int BigNum(int n1,int n2,int n3)
{
	if(n1>n2)
		return (n1>n3) ? n1 : n3;
	else
		return (n2>n3) ? n2 : n3;
}

int SmallNum(int n1, int n2, int n3)
{
	if(n1<n2)
		return (n1<n3) ? n1 : n3;
	else
		return (n2<n3) ? n2 : n3;
}

int main()
{
	int num1, num2, num3;

	printf("정수 3개 입력:");
	scanf("%d %d %d",&num1,&num2,&num3);

	printf("가장 큰 수는:%d\n",BigNum(num1,num2,num3));
	printf("가장 작은 수는:%d\n",SmallNum(num1,num2,num3));
	return 0;
}
