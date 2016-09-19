#include <stdio.h>

int main()
{
	char str[]={'G','o','o','d',' ','t','i','m','e'};
	int i;
	int result=sizeof(str)/sizeof(char);

	for(i=0;i<result;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
