#include <stdio.h>

void GuGuDan(int n1,int n2)
{
	int i,j; 
	
	for(i=n1; i<=n2; i++)
	{
		for(j=0; j<10; j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
	}
}

int main()
{
	int num1,num2;
	
	printf("정수 입력:");
	scanf("%d %d",&num1,&num2);
	
	if(num1<num2)
	{
		GuGuDan(num1,num2);
	}
	else
	{
		GuGuDan(num2,num1);
	}
	return 0;
}
