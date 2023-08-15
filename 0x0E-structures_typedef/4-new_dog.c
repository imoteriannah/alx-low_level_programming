#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function to create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *bing;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	bing = malloc(sizeof(dog_t));
	if (bing == NULL)
	{
		free(bing);
		return (NULL);
	}
	bing->name = malloc(i * sizeof(bing->name));
	if (bing->name == NULL)
	{
		free(bing->name);
		free(bing);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		bing->name[k] = name[k];
	bing->age = age;
	bing->owner = malloc(j * sizeof(bing->owner));
	if (bing->owner == NULL)
	{
		free(bing->owner);
		free(bing->name);
		free(bing);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		bing->owner[k] = owner[k];
	return (bing);
}
