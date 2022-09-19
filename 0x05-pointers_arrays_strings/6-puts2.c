#include "main.h"

/**
 * puts2 -  prints every other character in string
 * @str: pointer to string
 *Return: 0
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		 if (i % 2 == 0)
		 {
			 _putchar(str[i]);
		 }
		i++;
	}
	_putchar('\n');
	return (0);
}
