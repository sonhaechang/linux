#include <stdio.h>

int main()
{
	int input_arr[10];
	int arr[10];
	int i,f=0,b=9;

	for(i=0; i<10; i++)
	{
		printf("정수 입력:");
		scanf("%d",&input_arr[i]);
	}

	printf("배열 요소의 출력:"); 
	
	for(i=0;i<10;i++)
	{
		if(input_arr[i]%2==0)
		{
			arr[b]=input_arr[i];
			b--;
		}
		else
		{
			arr[f]=input_arr[i];
			f++;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}	
