#include "main.h"

/**
 *	_prime - is_prime_number
 *	@n: number.
 *	@div: number.
 *	Return: intiger.
*/

int _prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return ( _prime(n, div + 1));
}

/**
 *	is_prime_number - function that returns 1 if the input integer
 *		is a prime number, otherwise return 0.
 *	@n: number.
 *	Return: intiger.
*/

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_prime(n, div));
}
