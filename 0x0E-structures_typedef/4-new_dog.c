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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
	while (ptr->name[lenname])
		lenname++;
	while (ptr->owner[lenowner])
		lenowner++;
	ptr->name = malloc(sizeof(lenname + 1));
	ptr->owner = malloc(sizeof(lenowner + 1));
	for (i = 0; i < lenname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	for (i = 0; i < lenowner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
