#include "head.h"
#define N 3

void fun(int a[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; ++i)
	{
		sum += a[i][i];
	}
	printf("%d\n", sum);
}

int main()
{
	//OPEN_URL(__FILE__);
	int a[N][N];

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}
	fun(a);

	return 0;
}
