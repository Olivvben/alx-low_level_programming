#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number being retruned
 * Return: the value of n
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (a >= 0)
	{
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(-a + '0');
		return (-a);
	}
}
