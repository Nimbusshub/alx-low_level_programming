#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees new_dog
 * @d: the dog(s) to be freed
 * Return: a freed dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
