#include <stdio.h>

int main()
{
	int num1,num2,num3;
	int result;

	printf("정수 세 개 입력:");
	scanf("%d %d %d",&num1,&num2,&num3);

	result=(num1-num2)*(num2+num3)*(num3%num1);
	printf("연산의 결과:%d\n",result);
	return 0;
}
