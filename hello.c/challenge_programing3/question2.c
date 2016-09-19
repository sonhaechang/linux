#include <stdio.h>

int main()
{
	int arr[50][50];
	int i,j,len,idx;
	int val=0, s=0, w=-1, inc=1;

	printf("숫자 입력:");
	scanf("%d",&len);
	idx=len;

	while(1)
	{
		for(i=0; i<idx; i++)
		{
			val++;
			w=w+inc;
			arr[s][w]=val;
			printf("%d,%d=%d\n",s,w,val);
		}
		printf("\n");
		idx=idx-1;

		if(val==len*len)
			break;

		for(i=0; i<idx; i++)
		{
			val++;
			s=s+inc;
			arr[s][w]=val;
			printf("%d,%d=%d\n",s,w,val);
		}
		printf("\n");
		inc=inc*-1;
	}

	for(i=0; i<len; i++)
	{
		for(j=0; j<len; j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
