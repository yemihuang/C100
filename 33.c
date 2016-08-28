#include "head.h"

void fun(int n)
{
	int k;
	
	if (n == 2)
	{
		printf("%d是质数\n", n);
		return ;
	}
	if (n%2 == 0)
	{
		printf("%d不是质数\n", n);
		return ;
	}
	k = 0;
	for (int j = 3; j < n/2; j+=2)
	{
		if (n%j==0)
		{
			k = 1;
			break;
		}
	}
	if (k==0)
	{
		printf("%d是质数\n", n);
	}
	else
	{
		printf("%d不是质数\n", n);
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	int n;

	scanf("%d", &n);
	fun(n);
	return 0;
}