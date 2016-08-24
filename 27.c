#include "head.h"

void fun(int n)
{
	if (n == 0)
	{
		return ;
	}
	char k;
	scanf("%c",&k);
	fun(n-1);
	printf("%c", k);
}

int main()
{
	//OPEN_URL(__FILE__);
	fun(5);
	printf("\n");
	return 0;
}