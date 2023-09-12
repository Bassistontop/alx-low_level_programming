#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - new dog struct whose variable is goig
 * to be initialized
 *
 * @d: pointer to the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
d->name = name;
d->age = age;
d->owner = owner;
}
