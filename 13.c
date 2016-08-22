#include "head.h"

void fun()
{
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			for (int k = 0; k < 10; ++k)
			{
				if(i*i*i+j*j*j+k*k*k==100*i+10*j+k)
				{
					printf("%d%d%d\n", i,j,k);
				}	
			}
		}
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}