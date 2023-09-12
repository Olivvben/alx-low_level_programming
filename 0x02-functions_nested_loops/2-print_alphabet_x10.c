#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
