#include <stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int money;
};

int main()
{
	struct employee arr[3];
	int i;

	for(i=0; i<3; i++)
	{
		printf("이름 입력:");
		scanf("%s",&arr[i].name);

		printf("주민등록번호 입력:");
		scanf("%s",&arr[i].pid);

		printf("급여정보 입력:");
		scanf("%d",&arr[i].money);
	}

	for(i=0; i<3; i++)
	{
		printf("--------------------------------------------------------\n");
		printf("이름: %s 주민등록번호: %s 급여: %d\n",arr[i].name, arr[i].pid, arr[i].money);
		printf("--------------------------------------------------------\n");
	}
	return 0;
}
