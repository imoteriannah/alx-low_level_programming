#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function to Add a new node at the beginning of a list.
 * @head: pointer to a pointer to the first node of a list.
 * @n: Integer to insert.
 * Return: Address.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
