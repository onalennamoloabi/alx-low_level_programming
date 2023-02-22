#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 *Returns: ...
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(minute);
		}
		_putchar(hour);
	}
}
