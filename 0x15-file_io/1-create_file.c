#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates file
 * @filename: name of file to create
 * @text_content: NULL-terminated string
 *
 * Return: 1 0n success, -1 yet
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, close_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_result = write(file_descriptor, text_content, _strlen(text_content));
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close_result = close(file_descriptor);
	if (close_result == -1)
		return (-1);

	return (1);
}
