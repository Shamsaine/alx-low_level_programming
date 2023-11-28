#include "main.h"

/**
 * read_textfile - reads a text file and print it to the POSIX standard output
 *
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	fclose(file);
	free(buffer);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}

	return (bytesRead);

}
