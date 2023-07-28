#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 *
 * @head: first node of list fo free
 *
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next_node = head->next;

		free(head->str);
		free(head);
		head = next_node;

	}

}
