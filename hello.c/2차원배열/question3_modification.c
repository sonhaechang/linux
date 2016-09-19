#include <stdio.h>

void TestArr(int (*ar1)[4],int (*ar2)[5])
{
	int sum,i,j;

	for(i=0; i<4; i++)
	{
		sum=0;
		for(j=0; j<4; j++)
		{
			ar2[i][j]=ar1[i][j];
			sum += ar1[i][j];
		}
		ar2[i][4]=sum;
	}
}
void Test2Arr(int (*ar)[5])
{
	int sum=0;
	int i,j;

	for(i=0; i<4; i++)
	{
		sum=0;
		for(j=0; j<4; j++)
		{
			sum += ar[j][i];
		}
		ar[4][i]=sum;
		ar[4][4] += sum;
	}
}

void ShowArr(int (*ar)[5])
{
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d",ar[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr1[4][4];
	int arr2[5][5]={0};
	int i,j;

	for(i=0; i<4; i++)
	{
		printf("%d번째 입력\n",i+1);
		for(j=0; j<4; j++)
		{
			printf("입력:");
			scanf("%d",&arr1[i][j]);
		}
	}

	TestArr(arr1,arr2);
	Test2Arr(arr2);
	ShowArr(arr2);
	return 0;
}
