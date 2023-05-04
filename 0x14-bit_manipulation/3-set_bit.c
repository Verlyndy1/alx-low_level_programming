#include "main.h"

/**
 * set_bit - the value of a bit to 1 is set at a given index.
 * @n: set number.
 * @index: index at which to set bit.
 * Return: 1 if it works, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
