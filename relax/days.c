#include <stdio.h>
#include <time.h>

int getDaysFromOneYear(int year)
{
	int r = 365;

	if (year%100 == 0)
	{
		if (year%400 == 0)
		{
			r++;
		}
	}
	else 
	{
		if (year%4 == 0)
		{
			r++;
		}
	}
	return r;

}

int getDaysBetweenTwoYear(int year1, int year2)
{
	int i, sum;
	sum = 0;
	for (i = year1; i < year2; ++i)
	{
		sum = sum + getDaysFromOneYear(i);
	}
	return sum;
}

int getDaysInOneYear(int year, int month, int day)
{
	int r;
	if (month == 1)
	{
		r = day;
	}
	if (month == 2)
	{
		r = 31 + day;
	}

	if (year%100 == 0)
	{
		if (year%400 == 0)
		{
			day++;
		}
		
	}
	else
	{
		if (year%4 == 0)
		{
			day++;
		}

	}
	if (month == 3)
	{
		r = 59 + day;
	}
	if (month == 4)
	{
		r = 90 + day;
	}
	if (month == 5)
	{
		r = 120 + day;
	}
	if (month == 6)
	{
		r = 151 + day;
	}
	if (month == 7)
	{
		r = 181 + day;
	}
	if (month == 8)
	{
		r = 212 + day;
	}
	if (month == 9)
	{
		r = 243 + day;
	}
	if (month == 10)
	{
		r = 273 + day;
	}
	if (month == 11)
	{
		r = 304 + day;
	}
	if (month == 12)
	{
		r = 334 + day;
	}
	return r;
}

int getDays(int year, int month, int day)
{
	time_t timep;
	time(&timep);
	struct tm* now = localtime(&timep);
	int thisYear = 1900 + now->tm_year;
	int thisMonth = 1+ now->tm_mon;
	int thisDay = now->tm_mday;

	int res = getDaysBetweenTwoYear(year, thisYear)
		-getDaysInOneYear(year, month, day)
		+getDaysInOneYear(thisYear, thisMonth, thisDay);
	return res;
}

int main()
{
	int res;
	res = getDays(2010,4,30);
	printf("今天是我们认识第%d天\n", res);
	return 0;
}