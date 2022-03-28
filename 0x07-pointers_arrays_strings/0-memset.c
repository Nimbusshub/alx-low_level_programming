#include "main.h"
/**
 * _memset - it prints the value b in s, n times
 * @s: is a pointer to a string
 * @b: is the value to be put in s
 * @n: is the number of times the value would be printed
 * Return: s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 1;

	while (i <= n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
