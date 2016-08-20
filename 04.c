#include "head.h"

void fun(int year,int month,int day)
{
	int r;
	if (month==1)
	{
		r=day;
	}
	if (month==2)
	{
		r=31+day;
	}

	if (year%100==0)
	{
		if (year%400==0)
		{
			day=day+1;
		}
		
	}
	else
	{
		if (year%4==0)
		{
			day=day+1;
		}

	}
	if (month==3)
	{
		r=59+day;
	}
	if (month==4)
	{
		r=90+day;
	}
	if (month==5)
	{
		r=120+day;
	}
	if (month==6)
	{
		r=151+day;
	}
	if (month==7)
	{
		r=181+day;
	}
	if (month==8)
	{
		r=212+day;
	}
	if (month==9)
	{
		r=243+day;
	}
	if (month==10)
	{
		r=273+day;
	}
	if (month==11)
	{
		r=304+day;
	}
	if (month==12)
	{
		r=334+day;
	}
	printf("这一天是这一年的第%d天\n",r);
}
int main()
{
	//OPEN_URL(__FILE__);
	fun(2000,10,13);
	fun(1900,10,1);
	return 0;
}