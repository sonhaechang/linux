#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point ul;    //좌 하단
	Point lr;    //우 상단
} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("넓이:%d\n",(rec.ul.xpos-rec.lr.xpos)*(rec.ul.ypos-rec.lr.xpos));
}

void ShowRecPos(Rectangle rec)
{
	printf("좌 하단: [%d,%d]\n",rec.ul.xpos,rec.ul.ypos);
	printf("좌 상단: [%d,%d]\n",rec.ul.xpos,rec.lr.ypos);
	printf("우 하단: [%d,%d]\n",rec.lr.xpos,rec.ul.ypos);
	printf("우 상단: [%d,%d]\n",rec.lr.xpos,rec.lr.ypos);
}

int main()
{
	Rectangle rec1={{1,1},{4,4}};
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	return 0;
}
