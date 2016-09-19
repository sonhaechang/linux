#include <stdio.h>

int main()
{
	int num1,num2;
	int result;

	printf("정수 두 개 입력:");
	scanf("%d %d",&num1,&num2);

	result=(num1<num2) ? (num2-num1) :(num1-num2);
	printf("출력 결과:%d\n",result);
	return 0;
}
