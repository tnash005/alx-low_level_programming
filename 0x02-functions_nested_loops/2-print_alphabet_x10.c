#include "main.h"

/**
* print_alphabet - prints lower alphabets
*/
void print_alphabet (void)

{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar(j);
	}
}
