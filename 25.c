#include "head.h"

void fun()
{
    long double r = 1;
    long double sum = 0;
    
    for (int i = 1; i <= 20; ++i)
    {
        
        r = r*i;
        printf("%d!", i);
        if (i<20)
        {
            printf("+");
        }
        sum = sum + r;
    }
    printf("=%Lf\n", sum);
}

int main()
{
    //OPEN_URL(__FILE__);
    fun();
    return 0;
}