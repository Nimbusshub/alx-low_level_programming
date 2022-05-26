#include "main.h"
/**
 * _atoi - converts strings to integer
 * @s: string to be converted to an integer
 *
 * Return: the integers in the string as integers (Success)
 * or 0 if there's no integer in the string to return
 */

int _atoi(char *s)
{
	unsigned int i = 0, j = 0, sum = 0, l = 0, m = 0;

	while (i >= 0)
	{
		if (s[i] >= 48 && s[i] < 58)
		{
			if (s[i - 1] == 45 && s[i - 2] != 32)
			{
				i = i - 1;
				break;
			}
			break;
		}
		i++;
		if (s[i] == '\0' || s[i - 1] == '\0')
			return (0);
	}
	j = i, l = i;
	while (s[i])
	{
		if (!(s[i + 1] >= 48 && s[i + 1] < 58))
			break;
		i++;
	}
	m = i - j, m = _pow(10, m);
	for (; j <= i; j++)
	{
		if (s[j] == 45)
		{
			m /= 10;
			continue;
		}
		sum = sum + ((s[j] - 48) * m);
		m /= 10;
	}
	if (s[l] == 45)
		sum *= -1;
	return (sum);
}

/**
 *_pow - it prints the power of x to y
 * @x: the base number
 * @y: the exponent
 * Return: the power of x to y
 */
int _pow(int x, int y)
{
	int power;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y >= 1)
	{
		power = x * _pow(x, y - 1);
		return (power);
	}
	return (0);
}
