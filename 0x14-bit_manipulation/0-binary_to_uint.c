#include "main.h"
#include <stdio.h>


/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: char string
 *Return: converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;
	int i;


	if (b == NULL)
	return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	result <<= 1;


	result += (*b - '0');

return (result);
}


