#include "head.h"

void fun()
{
	int x;
	for (int i = 101; i < 201; ++i)
	{
		x = 0;
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				x = 1;
				break;
			}
		}
		if (x == 0)
		{
			printf("%d ", i);
		}
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}