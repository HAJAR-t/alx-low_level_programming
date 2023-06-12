#include "main.h"
#include <stdlib.h>

/**
* read_textfile- read text file and prints it to the POSIX standard output
* @filename: name of file to read
* @letters: number of letters to be read
*
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t i;
	ssize_t u;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	u = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (i);
}
