#include "main.h"

/*
 * print_lines - entry point
 *
 * Description: print lines
 *
 * @n: number of line
 *
 * Return: 0
 */
void print_lines(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
