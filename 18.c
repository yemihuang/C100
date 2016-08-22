#include "head.h"

void fun()
{
    int a, n;
    printf("请输入a和n：\n");
    //scanf("%d,%d",&a,&n);
    scanf("a=%d,n=%d",&a,&n);
    int s = 0, t = 0;
    for (int i = 1;i <= n;i++)
    {
        s = s + a;
        a = 10 * a;
        t = t + s;
        printf("%d",s);
        if (i<n)
        {
            printf("+");
        }
    }
    printf("=%d\n",t);
}

int main()
{
    //OPEN_URL(__FILE__);
    fun();
    return 0;
}