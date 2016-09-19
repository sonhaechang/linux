#include <stdio.h>

int main()
{
	FILE * fp=fopen("/home/201231051/cpgm/hello.c/문자열_데이터입출력/mystory.txt","wt");
	if(fp==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	
	fputs("#이름: 윤성우\n",fp);
	fputs("#주민번호: 900208-1012587\n",fp);
	fputs("#전화번호: 010-1111-2222\n",fp);
	fclose(fp);
	return 0;
}
