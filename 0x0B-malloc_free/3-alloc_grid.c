#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @height: height of the grid
 *
 * @width: width of grid
 *
 * Return: a pointer to an array of integers
 */

int **alloc_grid(int width, int height)
{
int a, b;
int **gridout;
if (width <= 0 || height <= 0)
{
return (NULL);
}
gridout = malloc(height * sizeof(int *));
if (gridout == NULL)
{
return (NULL);
free(gridout);
}
for (a = 0; a < height; a++)
{
gridout[a] = malloc(width * sizeof(int));
if (gridout[a] == NULL)
{
for (a--; a >= 0; a--)
return (NULL);
free(gridout[a]);
free(gridout);
}
}
for (a = 0; a < height; a++)
for (b = 0; b < width; b++)
gridout[a][b] = 0;
return (gridout);
}
