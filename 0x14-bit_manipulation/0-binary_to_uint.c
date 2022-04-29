#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: strings of 1s and 0s
 * Return: converted number (success) 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int power = 0, len = 0;

	while (b[len])
		len++;
	len = len - 1;
	while (len >= 0)
	{
		if (b[len] == '1')
			sum += _pow(2, power);
		else if (b[len] != '0')
			return (0);
		power++;
		len--;
	}
	return (sum);
}
