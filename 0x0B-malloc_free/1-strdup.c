#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: a pointer to a string
 * Return: pointer (Success)
 */
char *_strdup(char *str)
{
	int count = 0, len = 0, index = 0, index2 = 0;
	char *pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[index] != '\0')
	{
		count++;
		index++;
	}
	len = count;
	pointer = (char *)malloc(sizeof(char) * len);

	if (pointer == NULL)
		return (NULL);
	while (index2 < len)
	{
		*(pointer + index2) = *(str + index2);
		index2++;
	}
	return (pointer);
	free(pointer);
}
