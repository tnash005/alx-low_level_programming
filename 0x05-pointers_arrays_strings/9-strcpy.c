#include "main.h"

/**
 *  _strcpy - string copy
 *  @dest: ius the destiny
 *  @src: is the copia
 *  Return: return the copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
