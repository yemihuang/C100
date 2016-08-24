#include "head.h"

void fun(int n)
{
	int i = 0;

	for (i = 0; n > 0; ++i)
	{
		printf("%d", n%10);
		n /= 10; 
	}
	printf("\n一共%d位数\n", i);
}

int main()
{
	//OPEN_URL(__FILE__);
	int k;
	scanf("%d",&k);
	fun(k);
	return 0;
}