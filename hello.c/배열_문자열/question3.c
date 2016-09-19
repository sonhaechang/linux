#include <stdio.h>

int main()
{
	char voca[100];
	int len,i;
	char max=0;

	printf("영단어 입력:");
	scanf("%s",voca);

	for(len=0; voca[len] != '\0'; len++)
	{
	}
	
	for(i=0; i<len; i++);
		if(max<voca[i])
			max=voca[i];

	printf("아스키 코드의 값이 가장 큰 문자:%c\n",max);
	return 0;
}
