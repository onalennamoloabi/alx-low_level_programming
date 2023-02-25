#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* day_of_year - calculates the day of the year
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_remaining = 0;
	int i;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		days_in_month[2] = 29;
	}
	for (i = month; i <= 12; i++)
	{
		if (i == month)
		{
			days_remaining += days_in_month[i] - day;
		}
		else
		{
			days_remaining += days_in_month[i];
		}
	}
	printf("Day of the year: %d\n", day_of_year(month, day, year));
	printf("Remaining days: %d\n", days_remaining);
}

int day_of_year(int month, int day, int year)
{
	int i;
	int days = 0;
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		days_in_month[2] = 29;
	}
	for (i = 1; i < month; i++)
	{
		days += days_in_month[i];
	}
	days += day;
	return (days);
}

