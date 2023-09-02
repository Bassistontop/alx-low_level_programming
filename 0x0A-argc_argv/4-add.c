#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds to numbers
 * @argc: command line inputs
 * @argv: array tha contains the input
 *
 * Return: (0) on success
 */

int main(int argc, char *argv[])
{
int i, j, add = 0;
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
