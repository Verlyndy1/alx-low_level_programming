#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		puthchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
