#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * , starting from 00:00 to 23:59.
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour <= 9)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar(':');
			}
			else
			{
				_putchar(hour + '0');
				_putchar(':');
			}
			if (minute <= 9)
			{
				_putchar('0');
				_putchar(minute + '0');
			}
			else
			{
				_putchar(minute + '0');
			}
			_putchar('\n');
		}
	}
}
