#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with key
 * @ht: the hash table to look into
 * @key: the key to be looked for
 *
 * Return: value associated with the given key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (!ht || !key)
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
return (temp->value);
}
temp = temp->next;
}

return (NULL);
}
