#include "head.h"

void fun()
{
	int k;
	
	for (int i = 101; i < 200; ++i)
	{
		k = 0;
		for (int j = 2; j < i; ++j)
		{
			if (i%j==0)
			{
				k = 1;
				break;
			}
		}
		if (k==0)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}