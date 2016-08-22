#include "head.h"

#define N "30"

void open(char* pNum)
{
	char fileName[16];
	char str[128];
	char log[32];
	
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
	sprintf(log, "say open Program %sdot c", pNum);
	system(log);
}

int main()
{
	open(N);
	return 0;
}