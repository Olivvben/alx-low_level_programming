#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number being retruned
 * Return: the value of n
 */

int print_last_digit(int n)
{
	if (n % 10 >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
