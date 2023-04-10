#include "main.h"

/**
 *  set_bit - sets the value of a bit
 *  @n: decimal number pass by a pointer.
 *  @index: position of bit in binary.
 *
 *  Return: 1 on success, and -1 if fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;


	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
