#include "head.h"

void fun()
{
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= 4-i; ++j)
        {
          printf(" ");
        }
        for (int j = 1; j <= 2*i-1; ++j)
        {
          printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < 4; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
          printf(" ");
        }
        for (int j = 1; j <= 7-2*i; ++j)
        {
          printf("*");
        }
        printf("\n");
    }
}

int main()
{
    //OPEN_URL(__FILE__);
    fun();
    return 0;
}