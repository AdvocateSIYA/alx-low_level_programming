#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the c character to stdout
 * @c : output
 * Return: On success 1 and 0 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
