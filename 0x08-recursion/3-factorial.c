#include "main.h"

/**
 * int factorial: is a function to find the factorial of n
 * @n: a number to return a factorial from
 *
 * Return: the factorial on n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}


