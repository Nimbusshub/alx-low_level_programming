#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: a pointer to a string
 * @s2: a pointer to string 2
 * Return: pointer (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int len2 = 0, len1 = 0, index = 0, index2 = 0;
	char *pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	pointer = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (pointer == NULL)
	{
		return (NULL);
		free(pointer);
	}
	while (index < len1)
	{
		*(pointer + index) = *(s1 + index);
		index++;
	}
	while (index < (len1 + len2))
	{
		*(pointer + index) = *(s2 + index2);
		index++;
		index2++;
	}
	return (pointer);
	free(pointer);
}
