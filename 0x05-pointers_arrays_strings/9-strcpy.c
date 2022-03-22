#include "main.h"

/**
 * _strcpy - it copies string length
 * @dest: is a pointer
 * @src: is a pointer
 * Return: dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}


