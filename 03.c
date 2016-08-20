#include "head.h"
#include <math.h>

void fun()
{
	for (int i = 1; i < 100000; ++i)
	{
		int s1 = sqrt(i+100);
		int s2 = sqrt(i+268);

		if (s1*s1==(i+100) && s2*s2==(i+268))
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	//OPEN_URL(__FILE__);
	fun();
	return 0;
}

/*

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool canSqrt(int n)
{
	int s; 
	s = sqrt(n);
	if (s*s==n)
	{
		return true;
	}
	return false;
}

bool fun1(int n)
{
	bool r1;
	r1 = canSqrt(n+100);
	return r1;
}

bool fun2(int n)
{
	bool r2;
	r2 = canSqrt(n+268);
	return r2;
}
void fun(int n)
{
	bool r1,r2;
	r1 = fun1(n);
	r2 = fun2(n);

	if (r1==true&&r2==true)
	{
		printf("%d\n", n);
	}
}

void doFun()
{
	for (int i = 1; i < 100000; ++i)
	{
		fun(i);
	}
}

int main()
{
	doFun();
	return 0;
}*/