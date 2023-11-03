#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: Size of the array of linked lists in the table.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;

	if (size == 0)
	{
		return (NULL);
	}

	sht = calloc(1, sizeof(shash_table_t));

	if (!sht)
	{
		return (NULL);
	}

	sht->size = size;
	sht->array = calloc((size_t)sht->size, sizeof(shash_node_t *));
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}

	return (sht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: Sorted hash table to add the element to.
 * @key: Key of the element.
 * @value: Value of the element to store.
 *
 * Return: 1 on success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;
	shash_node_t *node;

	if (!ht || !key || !strcmp(key, "") || !value)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
			{
				return (0);
			}
			return (1);
		}
		node = node->next;
	}

	new = calloc(1, sizeof(shash_node_t));
	if (!new)
	{
		return (0);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;

	insert_sort(new, ht);
	return (1);
}

/**
 * insert_sort - Inserts a node into a sorted doubly linked list.
 * @node: Node to insert.
 * @ht: Pointer to the sorted hash table to insert it into.
 */
void insert_sort(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	if (!current || strcmp(node->key, current->key) <= 0)
	{
		ht->shead = node;
		if (current)
		{
			node->snext = current;
			current->sprev = node;
		}
		else
		{
			ht->stail = node;
		}
	}
	else
	{
		while (current->snext && strcmp(node->key, current->snext->key) > 0)
		{
			current = current->snext;
		}

		node->sprev = current;
		if (current->snext)
		{
			node->snext = current->snext;
			current->snext->sprev = node;
		}
		else
		{
			ht->stail = node;
		}

		current->snext = node;
	}
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * from the sorted hash table.
 * @ht: Sorted hash table to look into.
 * @key: Key of the value to retrieve.
 * Return: The value associated with the element,
 * or NULL if the key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key || !strcmp(key, ""))
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
		{
			return (node->value);
		}

		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *head = NULL;

if (!ht)
{
return;
}

head = ht->shead;

printf("{");
while (head)
{
printf("'%s': '%s'", head->key, head->value);
if (head->snext)
{
printf(", ");
}

head = head->snext;
}

printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse
 * @ht: Sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = ht->shead;

	if (!ht)
	{
		return;
	}
	node = ht->stail;

	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev)
		{
			printf(", ");
		}

		node = node->sprev;

	}
	printf("}\n");
}



/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
if (!ht)
{
return;
}

free_list_s(ht->shead);
free(ht->array);
free(ht);
}

/**
 * free_list_s - frees a linked list
 * @head: shash_node_t list to be freed
 *
 * Return: nothing
 */
void free_list_s(shash_node_t *head)
{
shash_node_t *temp;

while (head)
{
temp = head->snext;
free(head->key);
free(head->value);
free(head);
head = temp;
}
}
