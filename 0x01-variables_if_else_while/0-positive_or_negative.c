#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
* main - print number if positive, zero or negative
*
* this program highlight if a number is positive, zero or negative
* Return: 0
*/
int main(void)
{
int n;

void srand();
void rand();
srand(time(0));
n = rand() - RAND_MAX / 2;
	/* my code */
if (n > 0)
	{
		printf("%i is positive\n",n);
	}
else if (n ==0)
	{
		printf("%i is zero\n",n);
	}
else if (n < 0)
	{
		printf("%i is negative\n",n);
	}
return (0);
}
