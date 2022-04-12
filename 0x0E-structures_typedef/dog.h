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
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
