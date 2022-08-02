#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * _copy - copying function
 * @src: source
 * Return: ptr
 */
char *_copy(char *src)
{
	char *ptr;
	int len, i;

	if (src == NULL)
		return (NULL);
	for (len = 0; src[len] != '\0'; len++)
		;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0;  src[i] != '\0'; i++)
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}
/**
 * new_dog - new dog variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	pointer = malloc(sizeof(dog_t));
	if (pointer == NULL)
		return (NULL);
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(pointer);
		return (NULL);
	}
	(*pointer).name = new_name;
	(*pointer).age = age;
	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*pointer).name);
		free(pointer);
		return (NULL);
	}
	(*pointer).owner = new_owner;
	return (pointer);
}

