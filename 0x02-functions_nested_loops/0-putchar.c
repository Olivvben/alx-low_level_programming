#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: always 0
 */
int main(void)
{
	char data[] = "_putchar\n";
		int i;

		for (i = 0; i  < 10; i++)
		{
			_putchar(data[i]);
		}
	return (0);
}

