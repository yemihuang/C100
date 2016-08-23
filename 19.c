#include "head.h"

void fun(int n)
{
    int r = 0;

    for (int a = 2; a <= n; ++a)
    { 
        r = 1;
        for (int i = 2; i <= a/2; ++i)
        {
            if (a%i==0)
            {
                r += i;//r=r+i
            }
        }
        if (r==a)
        {
            printf("%d=1",a);
            for (int i = 2; i <= a/2; ++i)
            {
                if (a%i==0)
                {
                    printf("+%d", i);
                }
            }
            printf("\n");  
        }     
    }
}

int main()
{
    //OPEN_URL(__FILE__);
    fun(1000);
    return 0;
}