#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a pointer of datatype dog_t
 * @d: pointer to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
