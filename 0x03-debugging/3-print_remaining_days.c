#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_in_feb = 28;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_in_feb = 29;
	}
		if (month < 1 || month > 12)
		{
			printf("Invalid date: month %d is out of range.\n" month);
			return;
		}
		if (day < 1 || day > days_in_month[month - 1] ||
				(month == 2 && day > days_in_feb))
		{
			printf("Invalid date: day %d is out of range for month %d\n", day, month);
			return;
		}
		if (month >= 2 && day >= 60 && days_in_feb == 28)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", days_in_feb == 29 ? 366 - day : 365 - day);
