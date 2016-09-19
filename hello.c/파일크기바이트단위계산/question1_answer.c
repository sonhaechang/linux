#include <stdio.h>
#include <string.h>

GetFileSize(FILE *fp)
{
	long fpos;
	long fsize;
	fpos=ftell(fp);
	
	fseek(fp,0,SEEK_END);
	fsize=ftell(fp);
	fseek(fp,fpos,SEEK_SET);
	return fsize;
}

int main()
{
	char str[100];
	FILE * fp=fopen("data.txt","rt");
	fgets(str,100,fp);
	fputs(str,stdout);
	printf("파일의 크기:%ld \n",GetFileSize(fp));
	fgets(str,100,fp);
	fputs(str,stdout);
	printf("파일의 크기:%ld \n",GetFileSize(fp));
	fgets(str,100,fp);
	fputs(str,stdout);
	fclose(fp);
	return 0;
}
	
