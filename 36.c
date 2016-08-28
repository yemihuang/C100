#include "head.h"

void fun()
{
	int k;
	
	printf("2 ");
	for (int i = 3; i < 100; i+=2)
	{
		k = 0;
		for (int j = 3; j < i/2; j+=2)
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