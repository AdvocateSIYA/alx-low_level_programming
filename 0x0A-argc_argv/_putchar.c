#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: prints the character
 * Return: on success 1 and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
