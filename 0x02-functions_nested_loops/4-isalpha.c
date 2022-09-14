#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: character to be monitored
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
