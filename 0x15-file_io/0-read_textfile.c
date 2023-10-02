#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads the text and print to STDOUT.
 * @filename: text file thats bein read.
 * @letters: nubr of letters to be read i it
 * Return: w- actual nubr of bytes that are read and printed
 * 0 when func fails or filename is NULL.
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
