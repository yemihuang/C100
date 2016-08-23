#include "head.h"

void fun()
{
   int x = 1;

   for (int i = 9; i >= 1; --i)
   {
       x = (x+1)*2;
   }
   printf("第一天桃子总数为：%d\n", x);
}

int main()
{
	//OPEN_URL(__FILE__);
    fun();
    return 0;
}