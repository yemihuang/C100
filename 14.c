#include "head.h"

void fun(int a)
{
	if (a<=0)
	{
		printf("wrong");
	}
	if (a==1)
	{
		printf("1");
	}
	for (int i = 2; i <= a; ++i)
	{
		while (a%i==0)
		{
			a = a / i;
			printf("%d",i);
			if (a!=1)
			{
				printf("*");
			}
		}	
	}
	printf("\n");
}

int main()
{
	//OPEN_URL(__FILE__);
	int a;
	printf("请输入整数:\n");
	scanf("%d", &a);
	printf("%d=",a);
	fun(a);
	return 0;
}