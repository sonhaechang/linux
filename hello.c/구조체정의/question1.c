#include <stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int money;
};

int main()
{
	struct employee emp;
	
	printf("이름:");
	scanf("%s",&emp.name);

	printf("주민등록번호:");
	scanf("%s",&emp.pid);

	printf("급여정보:");
	scanf("%d",&emp.money);

	printf("이름: %s\n",emp.name);
	printf("주민등록번호: %s\n",emp.pid);
	printf("급여정보: %d\n",emp.money);

	return 0;
}
