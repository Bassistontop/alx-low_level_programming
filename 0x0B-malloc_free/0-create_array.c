#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates array of chars
 * @size: input for size of an array
 * @c: to store the string of characters
 *
 * Return: a pointer to the character c
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
if (size == 0)
{
return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
