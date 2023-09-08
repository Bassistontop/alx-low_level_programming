#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory to an array using malloc
 *
 * @nmemb: number of elements
 *
 * @size: size of memory allocated
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pt;
size_t i;
if (nmemb == 0 || size == 0)
	return (NULL);
pt = malloc(nmemb * size);
if (pt == NULL)
	return (NULL);
for (i = 0; i < (nmemb * size); i++)
	pt[i] = 0;
return (pt);
}
