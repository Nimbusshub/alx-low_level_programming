#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function to create a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: a newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i = 0, lenname = 0, lenowner = 0;

	while (name[lenname])
		lenname++;
	while (owner[lenowner])
		lenowner++;
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = malloc(sizeof(lenname + 1));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(lenowner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < lenname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	for (i = 0; i < lenowner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	ptr->age = age;
	return (ptr);
}
