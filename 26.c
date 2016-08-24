#include "head.h"

int fun(int n)
{
    int sum;

    if (n == 0)
    {
        sum = 1;
    }
    else
    {
        sum = fun(n-1)*n;
    }
    printf("%d!=%d\n", n, sum);
    return sum;
}

int main()
{
    //OPEN_URL(__FILE__);
    fun(5);
    return 0;
}