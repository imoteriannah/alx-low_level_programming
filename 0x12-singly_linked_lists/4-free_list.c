#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function to free a linked list
 * @head: pointer to the list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
