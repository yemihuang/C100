#include "head.h"

void fun(int n)
{
    double h = 100;
    double t = 100;
    
    h = h/2;
    for (int i = 2; i <= n; ++i)
    {   
        t = t + 2*h;
        h = h/2;
    }
    printf("第10次落地时，共经过%lf米；\n", t);
    printf("第10次反弹高%lf米\n", h);
}

int main()
{
    //OPEN_URL(__FILE__);
    fun(10);
    return 0;
}