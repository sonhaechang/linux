#include <stdio.h>
#include <string.h>

long GetFileSize(FILE * fp)
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
	FILE *fp=fopen("data.txt","rt");

	while(fgets(str,100,fp) != NULL)
	{
		fputs(str,stdout);
		printf("파일의 크기:%ld \n",GetFileSize(fp));
	}

	fclose(fp);
	return 0;
}
