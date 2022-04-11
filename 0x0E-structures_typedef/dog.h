#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a new struct with three members
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: no long cap
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
