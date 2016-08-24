#include "head.h"

void fun(int n)
{
	int i, j, k;
	int m = n;
	int len = 1;
	int q = 10;
	int nn = n;

	while (q<=n)
	{
		q *= 10;
		len++;
	}
	q /= 10;

	i = 0;
	for (; i < len/2; ++i)
	{
		j = n/q;
		n %= q;
		q /= 10;

		k = m%10;
		m /= 10;

		if (j != k)
		{
			break;
		}
	}
	if (j != k)
	{
		//printf("这不是回文数\n");
	}
	else
	{
		printf("%d ", nn);
		//printf("这是回文数\n");
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	//int n;

	//scanf("%d", &n);
	for (int i = 0; i < 10000; ++i)
	{
		//printf("%d ", i);
		fun(i);
	}
	return 0;
}