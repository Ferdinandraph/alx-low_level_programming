#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - printing the dog
 * @d: pointer variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
