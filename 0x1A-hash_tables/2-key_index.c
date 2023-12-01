#include "hash_tables.h"

/**
 * key_index - searc
 * @key: The size of the array
 * @size: The size of the array
 * Return: index of hashedstr
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((int)(hash_djb2(key) % size));
}
