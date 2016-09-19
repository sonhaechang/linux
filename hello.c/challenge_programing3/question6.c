#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SelUser(int * arr)
{
	printf("숫자 3개 입력:");
	scanf("%d %d %d",&arr[0], &arr[1], &arr[2]);
}

void SelCom(int * arr)
{
	int i;

	for(i=0; i<3; i++)
	{
		arr[i]=rand()%10;
	}
}
int Compare(int * arr1,int * arr2)
{
	int i,j;
	int count=0, strike=0, ball=0;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(arr1[i]==arr2[j])
			{
				i==j ? strike++ : ball++;
				break;
			}
		}
	}
	count++;
	printf("%d번째 도전 결과: %dstrike, %dball\n",count,strike,ball);

if(strike==3)
	return 1;
else
	return 0;
}

void Srand()
{
	srand((int)time(NULL));
}

int main()
{
	int comArr[3];
	int usrArr[3];
	int result=0;

	printf("Game Start!\n");
	SelCom(comArr);
	
	while(result != 1)
	{
		SelUser(usrArr);
		result=Compare(comArr,usrArr);
	}
	printf("Game End!\n");
	return 0;
}
