#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - check if a string contains non digit char
 * @s: string to be checked
 *
 * Return: 0 if its a non digit and 1 if its a digit
 */

int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
	i++;
}
return (1);
}

/**
 * _strlen - returns a string length
 * @l: string to be checked
 *
 * Return: length of the string
 */

int _strlen(char *l)
{
int a = 0;
while (l[a] != '\0')
{
a++;
}
return (a);
}

/**
 * error - handle errors in the function
 */

void error(void)
{
printf("Error\n");
exit(98);
}


/**
 * main - multilply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, pass, digit1, digit2, *value, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	error();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
value = malloc(sizeof(int) * len);
if (!value)
return (1);
for (i = 0; i <= len1 + len2; i++)
	value[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
pass = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
pass += value[len1 + len2 + 1] + (digit1 * digit2);
value[len1 + len2 + 1] = pass % 10;
pass /= 10;
}
if (pass > 0)
	value[len1 + len2 + 1] += pass;
}
for (i = 0; i < len - 1; i++)
{
if (value[i])
	a = 1;
if (a)
	_putchar(value[i] + '0');
}
if (!a)
	_putchar('0');
_putchar('\n');
	free(value);
	return (0);
}
