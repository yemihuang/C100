#include "head.h"

void fun(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			sum = i + j;
			if (sum%2 == 0)
			{
				printf("%c%c",219,219);
			}
			else
			{
				printf(" ");
			}
		}	
		printf("\n");
	}
}

int main()
{	
	OPEN_URL(__FILE__);
	fun(8);
	return 0;
}