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

	if (filename == NULL)
	{
		free(s);
		return (0);
	}

	file = open(filename, O_RDONLY);
	m = read(file, s, letters);
	s[m] = '\0';
	
	i = write(STDIN_FILENO, s, letters);
	if (i < 0 || m != i || file < 0 || m < 0)
	{
		free(s);
		return (0);
	}
	close(file);
	free(s);
	return (m);
}

