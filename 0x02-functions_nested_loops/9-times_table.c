#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 * Return: no return
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar('0');
			}
			if (j != 0 && k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) % 10 + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
