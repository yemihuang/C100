#include "head.h"

void open(char* pNum)
{
	char fileName[16];
	char str[128];

	sprintf(str, "cp 00.c %s.c", pNum);
	sprintf(fileName, "%s.c", pNum);
	if (!fopen(fileName, "r"))
	{
		system(str);
		printf("File %s create successfully.\n", fileName);
	}
	else
	{
		printf("File %s exist.\n", fileName);
	}
	OPEN_URL(str);
}

int main()
{
	open("29");
	return 0;
}