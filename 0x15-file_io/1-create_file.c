#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: the null terminated string to write in the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int descriptor;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_WRONLY |
		       O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(descriptor,
				text_content, strlen(text_content));

		if (bytesWritten == -1)
		{
			close(descriptor);
			return (-1);
		}
	}

	close(descriptor);

	return (1);
}
