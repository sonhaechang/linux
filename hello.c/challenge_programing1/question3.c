#include <stdio.h>

int GCD(int n1,int n2)
{
	int i,x;

	if(n1<n2)
	{
		for(i=1;i<=n1;i++)
		{
			if(n1%i==0 && n2%i==0)
			{
				x=i;
			}
		}
	}
	else
	{
		for(i=1;i<=n2;i++)
		{
			if(n1%i==0 && n2%i==0)
			{
				x=i;
			}
		}
	}
	return x;
}
int main()
{
	int num1,num2;
	
	printf("두 개의 정수 입력\n");
	scanf("%d %d",&num1,&num2);
	
	printf("최대공약수%d\n",GCD(num1,num2));
	return 0;
}
