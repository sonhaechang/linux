#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Len(char str[])
{
	int i;
	int len=0;
	
	len=strlen(str);

	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
			return i;
	}
	return -1;
}

int Age(char str1[],char str2[])
{
	int idex1=Len(str1);
	int idex2=Len(str2);
	int ag1,ag2;
	ag1=atoi(&str1[idex1+1]);
	ag2=atoi(&str2[idex2+1]);

	if(ag1==ag2)
		return 1;
	else
		return 0;
}

int Name(char str1[],char str2[])
{
	int idex1=Len(str1);
	int idex2=Len(str2);

	if(idex1 == idex2)
		return !strncmp(str1,str2,idex1);
	else
		return 0;
}
	
int main()
{
	char str1[20];
	char str2[20];

	puts("입력시 이름과 나이 사이를 한 칸 뛰고 입력하세요.");
	 
	printf("이름과 나이 입력:");
	fgets(str1,sizeof(str1),stdin);
	str1[strlen(str1)-1]=0;

	printf("이름과 나이 입력:");
	fgets(str2,sizeof(str2),stdin);
	str2[strlen(str2)-1]=0;

	if(Name(str1,str2))
		puts("이름이 동일합니다.");
	else
		puts("이름이 동일하지 않습니다.");

	if(Age(str1,str2))
		puts("나이가 같습니다.");
	else
		puts("나이가 같지 않습니다.");

	return 0;
}
