#include "main.h"

/**
 * times_table prints number from 0-9 with commas
 *
 */
void times_table(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
		if (c != 57)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
