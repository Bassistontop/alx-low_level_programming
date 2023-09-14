#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums up all its parameters
 *
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum
 * Return: if n == 0 - 0
 *	otherwise sum of all parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
