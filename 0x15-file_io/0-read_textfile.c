#include "main.h"
/**
 * read_textfile - reads a file and write it to stdout
 * @filename: file to read and print to stdout
 * @letters: numbers of chars to read
 * Return: the numbers of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t  m, i;
	char *s;

	if (!filename)
		return (0);

	s = malloc(sizeof(char) * letters + 1);
	if (s == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	m = read(file, s, letters);
	s[m] = '\0';
	i = write(STDOUT_FILENO, s, m);
	if (file < 0 || m != i)
	{
		free(s);
		return (0);
	}
	close(file);
	free(s);
	return (m);
}

