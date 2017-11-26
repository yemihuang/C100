#include "head.h"

void fun(char str[])
{
	int len;
	len = strlen(str);
	int j = len-1;
	char c;

	for (int i = 0; i < len/2; ++i, --j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;	
	} 
}

int main()
{
	OPEN_URL(__FILE__);
	char str[32];
	
	scanf("%s", str);
	fun(str);
	printf("%s\n", str);
	return 0;
}