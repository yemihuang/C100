#include "head.h"

void fun(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%c%c",219,219);
		}
		printf("\n");
	}

}

int main()
{
	//OPEN_URL(__FILE__);
	printf("@@\n");
	fun(8);
	return 0;
}