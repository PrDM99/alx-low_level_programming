#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{

	char *n;
	int x, r = 0;


	if (str == NULL)

		return (NULL);

	x = 0;

	while (str[x] != '\0')

		x++;

	n = malloc(sizeof(char) * (x + 1));

	if (n == NULL)

	return (NULL);

	for (r = 0; str[r]; r++)

	n[r] = str[r];

	return (n);

}

