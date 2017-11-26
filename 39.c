#include<stdio.h>
#define N 11

void fun()
{
    int a[N] = {0,11,22,33,44,55,66,77,88,100};
    printf("原始数组是：\n");
    for (int i = 0; i < N-1; ++i)
    {
        printf("%4d", a[i]);
    }
    printf("\n"); 

    int number;
    printf("插入一个新的数字：");
    scanf("%d", &number);
    a[N-1] = number;

    int k;
    for (int i = N-1; i > 0; --i)
    {
        if (a[i] < a[i-1])  
        {
            k = a[i-1];
            a[i-1] = a[i];
            a[i] = k;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        printf("%4d", a[i]);
    }
}

int main()
{
    fun();
    return 0;
}