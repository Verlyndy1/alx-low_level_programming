#include <stdio.h>

/**
 * main - prints out all different combos two digits
 *
 * Return: 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'0; tens <= '9'; tens++) /* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++) /* prints ones digit*/
		{
			if (!((ones == tens) || (tens > oness)))/* eliminates repitition*/
			{

			putchar(tens);
			putchae(ones);

			if (!(ones == '9' && tens == '8'))/* adds comma and space
			{
			
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
