#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 *
 * @filename: pointerto the name of the file
 * @text_content: text to be addded
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	descriptor = open(filename, O_WRONLY | O_APPEND);

	if (descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(descriptor, text_content,
				strlen(text_content));

		if (bytes_written == -1)
		{
			close(descriptor);
			return (1);
		}
	}

	close(descriptor);
	return (1);
}

