#include <stdio.h>

int main()
{
	int A,Z;
	int total=0;

	for(A=0;A<10;A++)
	{
		
		for(Z=0;Z<10;Z++)
		{
			if(A==Z)
				continue;
			total=(A*10+Z)+(Z*10+A);
			if(total==99)
				printf("%d%d+%d%d=%d\n",A,Z,Z,A,total);
		}
	}
	return 0;
}
