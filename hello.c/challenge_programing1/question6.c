#include <stdio.h>

int main()
{
	int hou,min,sec;

	printf("초(second) 입력:");
	scanf("%d",&sec);
	
	min=sec/60;
	sec=sec%60;
	
	hou=min/60;
	min=min%60;
	
	printf("[시(hour):%d,분(minute):%d,초(second):%d]\n",hou,min,sec);
	return 0;
}
