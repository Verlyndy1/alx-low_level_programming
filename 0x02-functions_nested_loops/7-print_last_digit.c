#include "main.h"
/**
 * print_last_digit - last digit
 *
 * @n: the int to print
 * Return: 0
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	return (k);

}
