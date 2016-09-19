#include <stdio.h>

int main()
{
	char voca[100];
	int len,i;
	int num=0;

	printf("단어 입력:");
	scanf("%s",voca);

	for(len=0; voca[len] != '\0';len++)
	{
	}

	for(i=0; i<len/2; i++)
	{
		if(voca[i] == voca[len-i-1])
			num++;
	
	}
	if(num == len/2)
		printf("This is Palindrome\n");
	else
		printf("This is Not Palindrome\n");
	
	return 0;
}
