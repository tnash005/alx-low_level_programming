#include <stdio.h>

/**
 * main - prints a series of numbers with commas
 *
 * Return: Success
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
