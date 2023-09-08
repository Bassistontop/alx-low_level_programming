#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to old memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pr;
size_t i, max = old_size;
char *oldp = ptr;
if (ptr == NULL)
{
pr = malloc(new_size);
return (pr);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (old_size == new_size)
	return (ptr);
pr = malloc(new_size);
if (pr == NULL)
	return (NULL);
if (new_size > old_size)
	max = old_size;
for (i = 0; i < max; i++)
pr[i] = oldp[i];
free(ptr);
return (pr);
}
