#include "head.h"

void fun()
{
    char i, j, k;

    for (i = 'x'; i <= 'z'; ++i)
    {
        for (j = 'x'; j <= 'z'; ++j)
        {
            if (i != j)
            {
              for (k = 'x'; k <= 'z'; ++k)
                {
                    if ((i!=k) && (j!=k) &&
                        (i!='x') && (k!='x') && (k!='z'))
                    {
                        printf("a=%c,b=%c,c=%c\n", i, j, k);
                    }
                }              
            }

        }
        
    }
}

int main()
{
    //OPEN_URL(__FILE__);
    fun();
    return 0;
}