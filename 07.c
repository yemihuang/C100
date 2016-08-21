#include "head.h"

int forfun(int n)
{
    int i;
    int j;

   for (i=1; i<=3; i++)
    {
        for (j=1; j<=20-i; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        
        printf("\n");

    }
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=19-i; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    for (i=1; i<=7; i++)
    {
        for (j=1; j<=17-i; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i+5; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (i=1; i<=9; i++)
    {
        for (j=1; j<=14-i; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i+11; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=12+n; j++)
        {
            printf(" ");
        }
        for (j=1; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");

    }

    return 0;

}

int main()
{
    //OPEN_URL(__FILE__);
    forfun(5);
    return 0;
}