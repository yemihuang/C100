#include "head.h"

int fun(int n)
{
    int age;

    if (n == 1)
    {
    	return 10;
    }
    age = fun(n-1) +2;
    return age;
}

int main()
{
    //OPEN_URL(__FILE__);
	int age;

    age = fun(5);
    printf("第五个人：%d岁\n", age);
    return 0;
}