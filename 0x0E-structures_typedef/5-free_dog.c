#include "dog.h"
#include <sdlib.h>

/**
 * free_dog - free dog
 * @d: a dog
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
