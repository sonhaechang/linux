#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SelectUser()
{
	int sel;

	printf("바위는 1, 가위는 2, 보는 3:");
	scanf("%d",&sel);

	if(sel==1)
		printf("바위 선택,");
	else if(sel==2)
		printf("가위 선택,");
	else
		printf("보   선택,");
	return sel;
}

int SelectCom()
{
	int sel=rand()%4;

	if(sel==1)
		printf("컴퓨터는 바위 선택,");
	else if(sel==2)
		printf("컴퓨터는 가위 선택,");
	else
		printf("컴퓨터는 보   선택,");
	return sel;
}

void Srand()
{
	srand((int)time(NULL));
}

int WhoWin(s1,s2)
{
	if(s1==s2)
		return 0;
	else if(s1>s2)
		return -1;
	else
		return 1;
}

int main()
{
	int user,com;
	int result;
	int win=0,same=0;

	while(1)
	{
		user=SelectUser();
		com=SelectCom();

		result=WhoWin(com,user);
		
		if(result==0)
		{
			printf("비겼습니다!\n");
			same++;
		}
		else if(result==1)
		{
			printf("당신이 이겼습니다!\n");
			win++;
		}
		else	
		{		
			printf("당신이 졌습니다!\n");
			break;
		}
	}
	printf("게임의 결과:%d승,%d무\n",win,same);
	return 0;
}
