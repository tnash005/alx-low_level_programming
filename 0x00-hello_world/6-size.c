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

	printf("size of char: %ld byte(s)\n",sizeof(c));
	printf("size of int: %ld byte(s)\n",sizeof(i));
	printf("size of long: %ld byte(s)\n",sizeof(li));
	printf("size of long long: %ld byte(s)\n",sizeof(lli));
	printf("size of float: %ld byte(s)\n",sizeof(f));
	return (0);
