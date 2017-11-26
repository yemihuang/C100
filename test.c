#include<stdio.h>
#define N 6

void fun()
{
    int a[N];
    printf("原始数组是：\n");
    for (int i = 0; i < N-1; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("\n"); 

    int number;
    printf("\n插入一个新的数字：");
    scanf("%d", &number);
    a[N-1] = number;

    int k;
    for (int i = 0; i < N-1; i++)
    {
        int min = i;
        for (int j = i+1; j < N; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            k = a[min];
            a[min] = a[i];
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