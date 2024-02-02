#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the hash table array
*
* Return: Ptr to new table, or NULL if fail
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int index;

	if (size <= 0)
		return (NULL);


	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
		return (NULL);
	newtable->size = size;

	for (index = 0; index < size; index++)
		newtable->array[index] = NULL;
	return (newtable);
}

