#include "head.h"

void fun()
{
	int mul = 0;

	printf("九九乘法表\n");
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			if(j <= i)
			{
				mul = i * j;
				printf("%d*%d=%-3d",j,i,mul);
			}
		}
		printf(" \n");
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}