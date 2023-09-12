#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	char data[] = "_putchar";
		int i;

		for (i = 0; i  < 8; i++)
		{
			_putchar(data[i]);
		}
		_putchar(10);
	return (0);
}

