#include <stdio.h>

int main()
{
	int num1=10,num2=20;
	int * ptr1=&num1;
	int * ptr2=&num2;

	(*ptr1)++;
	(*ptr2)--;

	ptr1=&num2;
	ptr2=&num1;

	printf("ptr1=%d,ptr2=%d\n",*ptr1,*ptr2);
	return 0;
}
