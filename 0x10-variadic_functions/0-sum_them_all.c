#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its paramters.
* @n: The number of paramters passed to the function.
*
* Return: the sum of the paramters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
