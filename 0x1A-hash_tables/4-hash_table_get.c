#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If cannot be matched - NULL.
 *         Otherwise - the value associated with key in hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_ind((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	node = ht->array[ind];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
