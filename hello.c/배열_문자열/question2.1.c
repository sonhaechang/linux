#include <stdio.h>

int main()
{
	int voca[100];
	int len,i;

	printf("영단어 입력:");
	scanf("%s",voca);

	printf("뒤집힌 영단어:");

	for(len=0; voca[len] != '\0'; len++)
	{
	}
	
	for(i=len; i>0; i--)
	{
		printf("%c",voca[i]);
	}
	printf("\n");
	return 0;
}
