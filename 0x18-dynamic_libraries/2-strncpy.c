#include "main.h"
/**
 * _strncpy - a function that joins two strings together
 * @dest: pointer of the first string
 * @src: pointer of the second string
 * @n: integer
 * Return: the copy of both (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
