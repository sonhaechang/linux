#include <stdio.h>

int arr[5][5];

void sts()
{
	int i,j;
	int sum;

	for(i=0; i<4; i++)
	{
		sum=0;
		printf("%d번째 학생의 성적 입력\n",i+1);
		for(j=0; j<4; j++)
		{
			printf("과목 %d\n",i+1);
			scanf("%d",&arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][4]=sum;
	}
}

void stts()
{
	int i,j;
	int sum;

	for(i=0; i<4; i++)
	{
		sum=0;
		for(j=0; j<4; j++)
		{
			sum += arr[j][i];
		}
		arr[4][i]=sum;
		arr[4][4] += sum;
	}
}
void ssts()
{
	int i,j;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	sts();
	stts();
	ssts();
	return 0;
}
