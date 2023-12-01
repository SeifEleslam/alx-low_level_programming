#include "hash_tables.h"

/**
 * hash_djb2 - searc
 * @str: The size of the array
 * Return: Ref to hashedstr
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((int)(hash_djb2(key) % size));
}
