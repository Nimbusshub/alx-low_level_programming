#include "main.h"
/**
 * _isalpha - print alphabets in lower or upper case
 * @c: Program will print alphabets
 * Return: 1 if (Success)
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

