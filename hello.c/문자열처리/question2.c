#include <stdio.h>
#include <string.h>

void Remove(char str[])
{
	int len=strlen(str);
	str[len-1]=0;
} 

int main()
{
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자열 입력:");
	fgets(str1,sizeof(str1),stdin);
	Remove(str1);

	printf("문자열 입력:");
	fgets(str2,sizeof(str2),stdin);
	Remove(str2);

	strcpy(str3,str1);
	strcat(str3,str2);
	printf("결과:%s\n",str3);
	return 0;
}
