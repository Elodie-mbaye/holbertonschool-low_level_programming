#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: The filename to open
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t n;
	char *tmp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	tmp = malloc(letters + 1);

	if (tmp == NULL)
		return (0);

	n = read(fd, tmp, letters);

	write(STDOUT_FILENO, tmp, n);
	close(fd);

	return (n);
}
