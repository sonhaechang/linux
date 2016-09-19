#include <stdio.h>

int main()
{
	char str[30];
	
	FILE * fp=fopen("/home/201231051/cpgm/hello.c/문자열_데이터입출력/mystory.txt","rt");
	if(fp==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	while(fgets(str,sizeof(str),fp) != NULL)
	{
		printf(str);
	}

	fclose(fp);
	return 0;
}
