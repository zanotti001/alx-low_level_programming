#include <variadic_functions.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments to be summed.
 *
 * Return: sum or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);

	return (sum);
}
