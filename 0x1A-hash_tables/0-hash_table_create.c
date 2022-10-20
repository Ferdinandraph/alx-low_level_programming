#include "hash_tables.h"
/**
 * hash_table_create - function that creates a new hashtable
 * @size: size of array
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i = 0;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_table_t *) * size);
	if (hashTable->array == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		hashTable->array[i] = NULL;
	}
	return (hashTable);
}
