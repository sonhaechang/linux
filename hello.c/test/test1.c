#include <stdio.h>
typedef struct
{
	char name[10];
	char id[20];
	char pone[20];
	char food[50];
	char hoby[50];
} Stroy;

int main()
{
	FILE * fp;
	Stroy mystory1;
	Stroy mystory2;

	fp=fopen("data.bin","wb");
	if(fp==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	puts("이름:");
	scanf("%s",mystory1.name);
	puts("주민번호:");
	scanf("%s",mystory1.id);
	puts("전화번호:");
	scanf("%s",mystory1.pone);
	puts("즐겨먹는 음식:");
	scanf("%s",mystory1.food);
	puts("취미:");
	scanf("%s",mystory1.hoby);

	fwrite((void*)&mystory1,sizeof(mystory1),1,fp);
	fclose(fp);

	fp=fopen("data.bin","rb");
	if(fp==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	fread((void*)&mystory2,sizeof(mystory2),1,fp);
	printf("%s \n",mystory2.name);
	printf("%s \n",mystory2.id);
	printf("%s \n",mystory2.pone);
	printf("%s \n",mystory2.food);
	printf("%s \n",mystory2.hoby);
	fclose(fp);
	return 0;
}
