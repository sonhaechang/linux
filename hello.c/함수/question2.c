#include <stdio.h>

double CelToFah(double c)
{
	return 1.8*c+32;
}

double FahToCel(double f)
{
	return (f-32)/1.8;
}

int main()
{
	int num;
	double c,f;
	
	printf("1.섭씨를 화씨로 2.화씨를 섭씨로 선택:");
	scanf("%d",&num);

	if(num==1)
	{
		printf("섭씨 입력:");
		scanf("%lf",&c);
		printf("화씨:%f",CelToFah(c));
	}
	else if(num==2)
	{
		printf("화씨 입력:");
		scanf("%lf",&f);
		printf("섭씨:%f",FahToCel(f));
	}
	else
		printf("다시 선택");

	return 0;
}
