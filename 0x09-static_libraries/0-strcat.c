#include "main.h"
#include <string.h>
/**
 * _strcat - a function that joins two strings together
 * @dest: pointer of the first string
 * @src: pointer of the second string
 * Return: the copy of both (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *cat = strcat(dest, src);

	return (cat);
}
