#include "main.h"

/**
 * _isdigit - check if parameter is a digit or character
 *
 * @c: parameter
 * Return: 1 if its a digit and 0 if its a character
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
