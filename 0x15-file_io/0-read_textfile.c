#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads the contents of a text file and outputs them to STDOUT
 * @filename: The name of the text file to be read.
 * @letters: The maximum number of letters to be read
 * Return: W - The actual number of bytes read and printed to STDOUT.
 *  0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
       	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
       	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

