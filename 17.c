#include "head.h"

void fun()
{
    char c;
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0;

    c = getchar();//scanf("%c", &c);
    while(c != '\n')
    {
        if((c >= 'a' && c <= 'z')||(c >='A'&& c<='Z'))
        {
            r1 = r1 + 1;
        }
        else if (c >= '0' && c <= '9')
        {
            r2++;
        }
        else if (c == ' ')
        {
            r3++;
        }
        else
        {
            r4++;
        }
        c = getchar();
    }

    printf("字母=%d,数字=%d,空格=%d,其他=%d\n", r1, r2, r3, r4);
}

int main()
{
    //OPEN_URL(__FILE__);
    fun();
    return 0;
}