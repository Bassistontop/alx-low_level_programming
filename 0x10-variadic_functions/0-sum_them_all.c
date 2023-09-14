#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums up all its parameters
 *
 * @n: the number of parameters passed to the function
 *
 * Return: the sum of the values
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;
	int sum = 0;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
