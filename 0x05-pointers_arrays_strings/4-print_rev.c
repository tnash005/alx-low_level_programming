#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to an int to be changed
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1 ; i >= 0; i-- '\0')
	{
		putchar (s[i]);
	}
}
