#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: first object pointer for name
 * @age: second object for age
 * @owner: last object for owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
typedef struct dog dog_t;
#endif
