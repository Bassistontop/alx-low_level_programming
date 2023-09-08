#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates array of integers
 *
 * @min: minimum array
 * @max: maximum array
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
int a, b;
int *i;
if (min > max)
	return (NULL);
b = max - min + 1;
i = malloc(sizeof(int) * b);
if (i == NULL)
	return (NULL);
for (a = 0; a < b; a++)
{
i[a] = min;
min++;
}
return (i);
}
