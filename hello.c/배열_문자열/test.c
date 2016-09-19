#include <stdio.h>

int main()
{
	char arr[100];
	int i=0,len,j=0;

		printf("영단어 입력:");
		scanf("%s",arr);

	for(len=0; arr[len]!='\0';len++)
	{
		j++;
	}
	printf("뒤집힌 출력;");

	for(i=j-1;i>=0;i--)
	{
		printf("%c",&arr[i]);
	}
	printf("\n");
	return 0;
}
