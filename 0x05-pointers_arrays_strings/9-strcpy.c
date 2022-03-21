#include "main.h"

/**
 *_isdigit  - check if number is digit 0 to 9
 * @c: c is an ascii character
 * Description:  Program will return 1 if input is digit 0 to 1
 * else it will return 0
 * Return: 1 if digit else 0 (Success)
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

