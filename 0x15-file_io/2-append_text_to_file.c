#include "main.h"

/**
 *append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the to the name of the file
 *@text_content: The streing to add to the end of the file
 *
 *Return: 1 on success,and -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int x, wr;
	int filled = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);

	if (filled == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (x = 0; text_content[x];)
			x++;
	}

	wr = write(filled, text_content, x);
	if (wr == -1)

	close(filled);
	return (-1);
}
