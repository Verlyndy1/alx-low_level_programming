#include "main.h"
/**
 * main - main function
 * print alphabe: function that prints alphabet in lower case
 * Return: 0
 */

void print_alphabet(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar ('\n');

	return (0);

}
