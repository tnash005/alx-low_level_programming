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
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		printf(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		printf(low);
		printf('\n');
	}
	return (0);
}
