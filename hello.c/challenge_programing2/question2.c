#include <stdio.h>

int main()
{
	int arr[50];
	int num,temp,j,i;
	
	printf("정수 입력;");
	scanf("%d",&num);
	
	for(i=0; ; i++)
	{
		arr[i]=num%2;
		num=num/2;
		if(num==0)
			break;
	}
	j=i;
	for(j=i; j>=0; j--)
	{
		printf("%d",arr[j]);
	}
	printf("\n");
	return 0;
}
