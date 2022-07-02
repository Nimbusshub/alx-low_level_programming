#include "hash_tables.h"
/**
 * hash - hashing function
 * @str: the string to hash and assign a value
 * Return: the hash in form of unsigned long int
 */
unsigned long int hash(const unsigned char *str)
{
	unsigned int hash = 0;
	int c;

	while ((c = *str++))
		hash += c;

	return (hash);
}
