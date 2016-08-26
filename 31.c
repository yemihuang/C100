#include "head.h"

void fun()
{
	char i,j;

	printf("输入第一个字母：\n");
	scanf("%c",&i);
	scanf("%c",&j);
	switch(i)
	{
		case 'm':
		{
            printf("monday\n");
            break;
        }
        case 'w':
        {
            printf("wednesday\n");
            break;
        }
        case 'f':
        {
            printf("friday\n");
            break;
        }
        case 't':
        {
        	printf("输入第二个字母：\n");
			scanf("%c",&j);
			if (j=='u')
			{
				printf("tuesday\n");
				break;
			}
			if (j=='h')
			{
				printf("thursday\n");
				break;
			}
		}
		case 's':
		{
        	printf("输入第二个字母：\n");
			scanf("%c",&j);
			if (j=='a')
			{
				printf("saturday\n");
				break;
			}
			if (j=='u')
			{
				printf("sunday\n");
				break;
			}
		}
		default:
		{
            printf("error\n"); 
            break;
        }
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}