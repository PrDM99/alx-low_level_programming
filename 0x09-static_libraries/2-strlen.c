#include "main.h"
#include <stdio.h>

/**
 *_strlen - function calculates the length of the string pointed to by s.
 *
 * @s: is a string
 * Return: Length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
