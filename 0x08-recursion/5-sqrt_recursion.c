#include "main.h"

/**
 * sqrt_a - returns natural square root
 * @a: input number
 * @b: iterator
 * Return: square root of -1
 */

int sqrt_a(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
