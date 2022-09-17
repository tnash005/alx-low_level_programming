#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - print number if positive, zero or negative
*
* this program highlight if a number is positive, zero or negative
* Return: 0
*/
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	/* my code */
if (n > 0)
{
	printf("%d is positive\n",n);
}
else if (n == 0)
{
	printf("%d is zero\n",n);
}
else if (n < 0)
{
	printf("%d is negative\n",n);
}

return (0);
}
