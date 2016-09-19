#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	printf("난수의 범위: 0부터 %d\n",99);
	for(i=0; i<5; i++)
	{
		printf("난수 출력:%d\n",rand()%100);
	}
	return 0;
}
