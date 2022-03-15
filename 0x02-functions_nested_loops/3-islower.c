#include "main.h"

/**
 *_islower  - check if alphabets is in lower case
 * @c: c is an ascii character
 * Description:  Program will print 1 if alphabets is in lower case
 * or 0 otherwise
 * Return: 1 if lowercase (Success)
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

