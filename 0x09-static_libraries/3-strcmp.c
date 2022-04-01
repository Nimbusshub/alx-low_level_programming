#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 * Return: the copy of both (Success)
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
