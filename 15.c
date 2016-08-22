#include "head.h"

void fun(int score)
{
    if (score>=90)
    {
        printf("A\n");
    } 
    else if (60<=score&&score<89)
    {
        printf("B\n");
    }
    else
    {
        printf("C\n");
    }
}
 
int main()
{
    //OPEN_URL(__FILE__);
    fun(32);
    return 0;
}