#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)\n" : d->owner);
	}
}
