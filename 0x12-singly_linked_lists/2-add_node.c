#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function to adds a new node at the linked list
 * @head: pointer to a pointer to the list
 * @str: string to be added to the list
 * Return: the address of the added string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
