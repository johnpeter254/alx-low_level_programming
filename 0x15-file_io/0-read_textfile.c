#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * read_textfile - Reads text file and prints to POSIX std output
 * @filename: name of txt file
 * @letters: number of letters to read and print
 *
 * Return: actual numbers of letters read and printed
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	size_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == SIZE_MAX)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
