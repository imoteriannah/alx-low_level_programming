#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to dog's name
 * @age:  dog's age
 * @owner: pointer to owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
