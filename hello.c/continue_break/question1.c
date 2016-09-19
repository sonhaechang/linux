#include <stdio.h>

int main()
{
	int dan, num;
	
	for(dan=2; dan<10; dan++)
	{
		if(dan%2==0+1)
		continue;

		for(num=1; num<10; num++)
		{
			if(dan>=num)
			printf("%d*%d=%d\n",dan,num,dan*num);
			continue;
		}
	}
	return 0;
}
