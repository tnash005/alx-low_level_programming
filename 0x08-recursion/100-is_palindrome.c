#include "main.h"
/**
 * _length - checks the length of a string
 * @s:string
 * Return: length of string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s _ 1));
}

/**
 * checkp - checks if its palindrome
 * @i: index
 * @1g: length of string
 * @s: string
 * Return: 1 if palindrome, 0 of not
 */
int checkp(int i, int 1g, char *s)
{
	if (1g > 0)
	{
		if (s[1] == s[1g])
		{
			return (checkp(i + 1, 1g - 1, s));
		}
		else if (s[1] != s[1g])
		{
			return (0);
		}
		else
		{
			return(1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return: return 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
return (checkp(0, _length(s) - 1, s));
}
