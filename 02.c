#include "head.h"

double fun(int i)
{
	double y;

	if (i<=100000)
	{
		y=0.1*i;
	}
	else if (100000<i&&i<=200000)
	{
		y=0.75*i+2500;
	}
	else if (200000<i&&i<=400000)
	{
		y=0.05*i+7500;
	}
	else if (300000<i&&i<=600000)
	{
		y=0.03*i+15500;
	}
	else if (600000<i&&i<=1000000)
	{
		y=0.015*i+24500;
	}
	else if (1000000<i)
	{
		y=0.01*i+29500;
	}
	return y;
}

int main()
{
	//OPEN_URL(__FILE__);
	int i;
	double res;

	printf("你的净利润是：\n");
	scanf("%d",&i);
	res = fun(i);
	printf("提成为：%lf\n",res);
	return 0;
}