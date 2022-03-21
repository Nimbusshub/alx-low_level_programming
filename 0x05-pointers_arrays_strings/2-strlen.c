#include "main.h"

/**
 * _strlen - counts and prints the length of string
 * @str: is a pointer
 * Return: count (Success)
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
