#include <stdio.h>

int main()
{
	int kor,ing,math;
	double total;

	printf("국어 영어 수학 성적입력:");
	scanf("%d %d %d",&kor,&ing,&math);

	total=kor+ing+math/3.0;
	printf("평균:%f\n",total);

	if(total>90.0)
	printf("A\n");

	else if(total>80.0)
	printf("B\n");

	else if(total>70.0)
	printf("C\n");
	
	else if(total>50.0)
	printf("D\n");

	else
	printf("F\n");

	return 0;
}
