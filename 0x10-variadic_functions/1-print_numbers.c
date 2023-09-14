#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - a function that prints numbers followed by a nw line
 *
 * @separator: string to be printed between the numbers
 * @n: the number of intergers passed
 *
 * @...: variable arguments to parameter
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		int num = va_arg(nums, int);

		int temp = num;
		int digit_count = 0;

		do {
			temp /= 10;
			digit_count++;
		} while (temp != 0);

		temp = num;
		for (int j = digit_count - 1; j >= 0; j--)
		{
			char digit = (temp / (int)pow(10, j)) + '0';

			putchar(digit);
			temp %= (int)pow(10, j);
		}

		if (index != (n - 1) && separator != NULL)
		{
			while (*separator != '\0')
			{
				putchar(*separator);
				separator++;
			}
		}
	}

	va_end(nums);

	putchar('\n');
}
