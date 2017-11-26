
#include<stdio.h>
int main()
{
    int i,j,result;
    printf("\n");
    for (i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            result=i*j;
            if (i>=j)
            {
	            printf("%d*%d=%-3d",j,i,result); 
	        }
        }
    printf("\n"); 
    }
}