#include "main.h"

/**
 * _abs - absolute value
 *
 * @n: is the given character
 * Description: function that computes the absolute value of an integer.
 * Return: integer.
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1; 
	return (n);
}
