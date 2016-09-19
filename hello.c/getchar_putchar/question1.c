#include <stdio.h>

int change(int ch)
{
	int diff='a'-'A';

	if(ch>='A' && ch<='Z')
		return ch+diff;
	else if(ch>='a' && ch<='z')
		return ch-diff;
	else
		return -1;
}

int main()
{
	int ch;
	
	printf("문자열 입력:");
	ch=getchar();
	ch=change(ch);
	if(ch == -1)
	{
		printf("입력 오류\n");
	}
	putchar(ch);
	printf("\n");
	return 0;
}
