#include "stdio.h"

/**
 * main - a function that prints the number of passed
 * arguments
 * @argc: number of command line arguments
 * @argv: arrays that contains the arguments
 *
 * Return: (0) on success
 */

int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
