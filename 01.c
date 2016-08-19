#include <stdio.h>

void fun(int n)
{
	int i, j, k;

	for(i = 1; i < n ; i++)
	{
		for(j = 1; j < n; j++)
		{
			for (k = 1; k < n; k++)
			{
				if (i!=k && i!=j && j!=k)
				{
					printf("%d,%d,%d\n", i, j, k);
				}
			}
		}
	}
}

int main()
{
	fun(5);
	return 0;
}