#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: argument count
 *
 * Return: The sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
