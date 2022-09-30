#include "main.h"
/**
 * helperFunction - return 0 or 1
 * @num: number being checked
 * @i: possible factor
 * Return: 0 if not prime, 1 if prime
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(um, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks if its prime or not
 * @n: number to e checked
 * Return: 1 if  prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= i)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
