#include "head.h"
#define N 10

void fun(int a[])
{
	int k;
	for (int i = 0; i < N/2; ++i)
	{
		k = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = k;
	}
	printf("\n排序后的数组:\n");
	for (int i = 0; i < N; ++i)
	{
		printf("%d", a[i]);
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	int a[N] = {0,1,2,3,4,5,6,7,8,9};
	printf("原始数组是：\n");
	for (int i = 0; i < N; ++i)
	{
		printf("%d", a[i]);
	}
	fun(a);
	
	return 0;
}