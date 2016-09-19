#include <stdio.h>

int SquareByValue(int n)
{
	int result=n;
	result *= n;
	return result;
}

void SquareByReference(int * ptr)
{
	int n= *ptr;
	*ptr *= n;
}

int main()
{
	int num;

	printf("정수 입력:");
	scanf("%d",&num);

	printf("%d\n",SquareByValue(num));
	SquareByReference(&num);
	printf("%d\n",num);
	return 0;
}
