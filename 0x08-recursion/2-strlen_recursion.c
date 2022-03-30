#include "main.h"
/**
 * _strlen_recursion - count the length of a string
 * @s: a pointer to the string
 * Return: The length of the string (Success)
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1);
		len++;
		return (len);
	}
	return (0);
}
