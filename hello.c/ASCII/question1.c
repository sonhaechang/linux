#include <stdio.h>

int main()
{
	int xpos1,ypos1;
	int xpos2,ypos2;
	int area;

	printf("좌 상단 x,y 좌표:");
	scanf("%d %d",&xpos1,&ypos1);

	printf("우 하단 x,y 좌표:");
	scanf("%d %d",&xpos2,&ypos2);

	area=(xpos2-xpos1)*(ypos2-ypos1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n",area);
	return 0;
}
