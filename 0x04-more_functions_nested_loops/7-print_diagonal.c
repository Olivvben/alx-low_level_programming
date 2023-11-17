#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n:  is the number of times the character \ should be printed
 * Return: none
 */

void print_diagonal(int n)
{
	int size;
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar (' ');
			}
				_putchar ('\');
				_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
