#include "stdio.h"

/**
 * main - prints its name followed by a new line
 *
 * @argc: number of comman line arguments
 * @argv: array that contains the arguments
 * Return: (0) on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
