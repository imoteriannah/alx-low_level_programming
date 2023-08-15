#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free memory of dog
 * @d: pointer to  dog structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
