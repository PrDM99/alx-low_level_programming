#include "main.h"

/**
 * read_texttile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to be read and printed by the function.
 *
 * Return: actual number of letters function could read and print.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int xo;
	char *buffer;
	int lenRead, lenWrite;

	if (filename == NULL)
	return (0);

	xo = open(filename, O_RDONLY);
	if (xo == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	lenRead = read(xo, buffer, letters);

	lenWrite = write(STDOUT_FILENO, buffer, lenRead);

	if (lenRead != lenWrite && lenWrite == -1)
	return (0);


	free(buffer);
	close(xo);

	return (lenRead);
}
