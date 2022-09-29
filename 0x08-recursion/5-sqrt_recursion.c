#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists
 * @num: number
 * @pSqrt: possible squareroot
 *
 * Return: sqrt
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural squareroot
 * @n: number to find sqrt
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
