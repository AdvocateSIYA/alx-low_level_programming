#include "main.h"
#include <limits.h>

/**
 * clear_bit - sets the value of a bit to 0 a a given index
 * @n: A pointer to an unsigned long int
 * @index: The index of the bit
 *
 * Return: 1 if worked, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	*n &= ~(0x01 << index);

	return (1);
}
