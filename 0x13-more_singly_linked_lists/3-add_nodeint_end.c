#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function to Add a new node at the end of a list.
 * @head: pointer to a pointer the first node of a list.
 * @n: Integer to insert.
 * Return: Address new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
