#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void say()
{
	char str[10240] = "say ";
	char message[256];

	while (1)
	{
		int count = 1;
		//scanf("%d", &count);
		scanf("%s", message);
		str[4] = 0;
		for (int i = 0; i < count; ++i)
		{
			strcat(str, message);	
		}
		system(str);
	}
}

int main()
{
	say();
	return 0;
}