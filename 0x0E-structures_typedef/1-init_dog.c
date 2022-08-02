#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializing the struct var
 * @d: the struct var name
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
