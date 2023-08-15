#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print's a dog
 * @d: dog's struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (dog)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
