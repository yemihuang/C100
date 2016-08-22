#include "head.h"

void fun(int m, int n)
{
    int r, t;
    if (m<n)
    {
        t = m;
        m = n;
        n = t;
    }
    for (int i = 1; i <= m; ++i)
    {
        if (n%i == 0)
        {
            r = n/i;
            if (m%r == 0)
            {
                printf("最大公约数：%d\n", r);
                break;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        r = i*m;
        if (r%n==0)
        {
          printf("最小公倍数：%d\n",r);
          break;
        }
    }
}

int main()
{
    //OPEN_URL(__FILE__);
    fun(12, 26);
    return 0;
}