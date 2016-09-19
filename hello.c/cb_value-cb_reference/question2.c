#include <stdio.h>

void Swap3(int * n1, int * n2, int * n3)
{
	int temp = *n3;
	*n3 = *n2;
	*n2 = *n1;
	*n1 = temp;
}

int main()
{
	int num1=10;
	int num2=20;
	int num3=30;

	Swap3(&num1,&num2,&num3);
	printf("%d,%d,%d\n",num1,num2,num3);
	return 0;
}
