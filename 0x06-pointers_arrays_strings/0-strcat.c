#include "main.h"

/**
 * strcat - Concatenats the string poited to by @src, including terminating
 * a null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be linked to.
 * @src: The source string to be added to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

