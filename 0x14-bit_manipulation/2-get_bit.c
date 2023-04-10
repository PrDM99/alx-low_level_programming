#include "main.h"

/**
 *get_bits - Returns the value of a bit at a given index.
 *@index: position of bit in binary number.
 *@n: number to be converted to binary first.
 * Return: value og bitat index, or -1 if fails.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int size;

	if (index >= 64 || n == 0)
		return (-1);

	size = n >> index;


		return (size & 1);
}
