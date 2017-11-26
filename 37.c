#include "head.h"
#define N 10
void fun()
{
	int a[N];
	printf("请输入 10 个数字：\n");
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &a[i]);
	}

	int k;
	for (int i = 0; i < N-1; ++i)
	{
		int min = i;
		for (int j = i+1; j < N; ++j)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			k = a[min];
			a[min] = a[i];
			a[i] = k;
		}
	}
	printf("排序结果是:\n");

	for (int i = 0; i < N; ++i)
	{
		printf("%d", a[i]);
	}
}

int main()
{
	//OPEN_URL(__FILE__);	
	fun();
	return 0;
}