#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void OPEN_URL(char* file)
{
	char str[128];

	memset(str, 0, 128);
	int fileLen = strlen(file);
	strcat(str, "open http://www.runoob.com/cprogramming/c-exercise-example");
	int len = strlen(str);
	if (file[fileLen-3] > '9')
	{
		return ;
	}
	if (file[fileLen-5] == '1')
	{
		str[len++] = '1';
	}
	if (file[fileLen-5] == '1' || file[fileLen-4] != '0')
	{
		str[len++] = file[fileLen-4];
	}
	str[len++] = file[fileLen-3];
	str[len++] = 0;
	strcat(str, ".html");
	printf("%s\n", str);
	system(str);
}
