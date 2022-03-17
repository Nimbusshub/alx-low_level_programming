#include "main.h"

/**
 *_isupper  - check if alphabets is in upper case
 * @c: c is an ascii character
 * Description:  Program will print 1 if alphabets is in upper case
 * or 0 otherwise
 * Return: 1 if lowercase (Success)
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

