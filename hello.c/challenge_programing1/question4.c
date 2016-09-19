#include <stdio.h>

int main()
{
	int c,b,s;
	int total=3500;

	printf("현제 당신이 소유하고 있는 금액:%d\n",total);

	for(c=1;c<10;c++)
	{
		for(b=1;b<10;b++)
		{
			for(s=1;s<10;s++)
			{
				if((c*400)+(b*500)+(s*700)==total)
				{
					printf("크림빵%d개,새우깡%d개,콜라%d개\n",b,s,c);
				}
			}
		}
	}
	printf("어떻게 구입하시겠습니까?\n");
	return 0;
}
					
