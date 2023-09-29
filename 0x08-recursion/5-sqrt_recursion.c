#include "main.h"

/**
 *	_sqrt - a function that checks for square root of number.
 *	@n: number.
 *	@r: number.
 *	Return: intiger.
*/

int _sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r == n / 2)
		return (-1);
	return (_sqrt(n, r + 1));
}

/**
 *	_sqrt_recursion - a function that returns the value
 *		of x raised to the power of y.
 *	@n: number.
 *	Return: intiger.
*/

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (_sqrt(n, r));
}
