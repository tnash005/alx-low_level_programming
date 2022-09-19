#include "main.h"

/**
 * _strlen - length of a string
 * @s: int pointer to be updated
 * Return: 0
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
