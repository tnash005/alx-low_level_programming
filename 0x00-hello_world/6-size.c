#include <stdio.h>

/**
* main - print out string from given function
*
* Description: using the main function
* this program is all about size of various types on computer 
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %d byte(s)\n", sizeof(c));
	printf("size of int: %d byte(s)\n", sizeof(i));
	printf("size of long: %d byte(s)\n", sizeof(li));
	printf("size of long long: %d byte(s)\n", sizeof(lli));
	printf("size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
