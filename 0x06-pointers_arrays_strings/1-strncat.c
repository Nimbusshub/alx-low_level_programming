#include "main.h"
#include <string.h>
/**
 * _strncat - a function that joins two strings together
 * @dest: pointer of the first string
 * @src: pointer of the second string
 * @n: integer value
 * Return: the copy of both (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = strncat(dest, src, n);

	return (cat);
}
