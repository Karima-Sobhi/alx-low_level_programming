#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees a dog
  * @d: dog's struct object
  *
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
