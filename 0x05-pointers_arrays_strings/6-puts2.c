#include "main.h"
#include <stdio.h>

/**
 * puts2 - function should print only one character out
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}

	printf("%s (%d chars long)\n", str, longi);

	for (o = 0; o < longi; o += 2)
	{
		_putchar(str[0]);
	}
	_putchar('\n');
}
