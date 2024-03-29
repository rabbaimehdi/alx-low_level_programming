#include "hash_tables.h"

/**
 * hash_djb2 - Implementing the djb2 algorithm.
 * @str: The string.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int counter;

	hash = 5381;
	while ((counter = *str++))
		hash = ((hash << 5) + hash) + counter;

	return (hash);
}
