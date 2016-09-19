#include <stdio.h>

int main()
{
	int i=0,total=0;
	int input,num;

	printf("몇 개의 정수를 입력하겠습니까?");
	scanf("%d",&num);

	while(i++<num)
	{
		printf("정수 입력:");
		scanf("%d",&input);
		total += input;
	}

	printf("평균 값:%f\n",(double)total/num);
	return 0;
}	
