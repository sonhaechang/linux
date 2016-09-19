#include <stdio.h>

int main()
{
	int num1,num2;

	printf("정수 입력:");
	scanf("%d",&num1);

	num2 = ~num1+1;
	printf("연산의 결과:%d\n",num2);
	return 0;
}
