#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the file
 * @text_content: A pointer to write to the file
 *
 * Return: 1 on success ,and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int len, w;
	int filled = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (filled == -1)
			return (1);

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	w = write(filled, text_content, len);
		if (w == -1)
		return (-1);

	close(filled);

	return (1);
}
