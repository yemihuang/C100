#include "head.h"

void fun()
{
	int a,b,c;
	a = 0;
	b = 1;
	printf("第1个月兔子总数为：1对\n");
	for (int i = 2; i <= 40; ++i)
	{
		c = a + b;
		printf("第%d个月兔子总数为：%d对\n",i, c);
		a = b;
		b = c;
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}