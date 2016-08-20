#include "head.h"

void fun(int x, int y, int z)
{
    int t;
    if (x > y)
    {
        t = x;
        x = y;
        y = t;
    }
    if (x>z)
    {
        t = x;
        x = z;
        z = t;
    }
    if (y>z)
    {
        t = y;
        y = z;
        z = t;
    }
    
    printf("%d,%d,%d\n",x,y,z);
}

int main()
{
    //OPEN_URL(__FILE__);
    fun(7897,1233,5644);
    return 0;
}