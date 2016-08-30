#include "head.h"

void fun(char str[], char s[])
{
    int hash[128] = {0};

    if(s == NULL)
        return ;

    for(int i = 0; i < strlen(s); i++)
        hash[(int)s[i]] = 1;

    int k = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if (hash[(int)str[i]] == 0)
        {
            str[k] = str[i];
            k++;
        }
    }
    str[k] = 0;
}


/*void fun(char str[], char s[])
{
    int k = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        int isSame = 0;
        for (int j = 0; j < strlen(s); ++j)
        {
            if (str[i] == s[j])
            {
                isSame = 1;
                break;
            }
        }
        if (isSame == 0)
        {
            str[k] = str[i];
            k++;
        }
    }
    str[k] = 0;
}*/

int main()
{
	//OPEN_URL(__FILE__);
    char str[] = "123454";
    char s[] = "45";

    fun(str, s);
    printf("%s\n", str);
	return 0;
}