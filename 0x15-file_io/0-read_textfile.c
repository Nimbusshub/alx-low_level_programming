#include "main.h"
/**
 * read_textfile - reads a file and write it to stdout
 * @filename: file to read and print to stdout
 * @letters: numbers of chars to read
 * Return: the numbers of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i;
	long int m;
	char *s;

	s = malloc(sizeof(char) * letters + 1);
	if (s == NULL)
		return (0);

	if (!filename)
	{
		free(s);
		return (0);
	}

	file = open(filename, O_RDONLY);
	m = read(file, s, letters);
	s[m] = '\0';
	i = write(STDIN_FILENO, s, m);
	if (i < 0 || m != i || m < 0 || file < 0)
	{
		free(s);
		return (0);
	}
	close(file);
	free(s);
	return (m);
}

