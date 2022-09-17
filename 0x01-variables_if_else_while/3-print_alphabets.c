#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'q'; low++)
	{
		if (low ! = e && ! = q)
		{
			putchar(low);
		}
		printf("\n");
	}
	return (0);
}

