#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function toSum all of the data in a list.
 * @head: Address of the first node.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
