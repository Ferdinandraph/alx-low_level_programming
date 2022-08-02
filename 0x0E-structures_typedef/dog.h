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
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
