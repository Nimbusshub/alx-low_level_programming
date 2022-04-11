#include "dog.h"
/**
 * init_dog - void function that initializes a variable
 * @d: pointer to the address of the initialized variable
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: return an initialized variable.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
