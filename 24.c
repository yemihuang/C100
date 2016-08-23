#include "head.h"

void fun()
{
    int a = 1;
    int b = 2;
    int t;
    double sum = 0;

    for (int i = 1; i <= 20; ++i)
    {
        sum = sum + (double)b/a;
        t = a + b;
        a = b;
        b = t;
    }
    printf("%lf\n", sum);
}

int main()
{
    //OPEN_URL(__FILE__);
    fun();
    return 0;
}