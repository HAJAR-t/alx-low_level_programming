#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its paramters.
* @n: The number of paramters.
* Return: the sum of the paramters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
