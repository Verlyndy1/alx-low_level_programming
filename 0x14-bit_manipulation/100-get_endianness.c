#include "main.h"

/**
 * get_endianness - checks the endianness
 *  Return: 0 if the big endian, i if the little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
