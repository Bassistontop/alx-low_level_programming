#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiples of a number
 * @argc: number of command line argum...
 * @argv: array that contains the argum...
 * Return: (0) on success
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
