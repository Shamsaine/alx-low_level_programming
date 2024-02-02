#include "hash_tables.h"
/**
* key_index - function that gives you the index of a key
* @key: the key to get index from
* @size: size of array of hash table
*
* Return: Index of where key/value pair is stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
