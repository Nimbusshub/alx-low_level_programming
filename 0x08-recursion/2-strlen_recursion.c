#include "main.h"
/**
 * _strlen_recursion - count the length of a string
 * @s: a pointer to the string
 * Return: The length of the string (Success)
 */
int _strlen_recursion(char *s)
{
	if (*b == '\0')
	{
		return (0);
	}
	int len = 0;

	if (*b != '\0')
	{
		len = _strlen_recursion(b + 1);
		len++;
		return (len);
	}
}
