#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This structure contains of info about
 * dog[name, age, owner]
 *
 * ~dawoud
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
