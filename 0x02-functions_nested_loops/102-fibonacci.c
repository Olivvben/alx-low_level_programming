#include <stdio.h>

/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	int i;

	for (i = 0; i <= 50; i++)
	{
		if (i < 49)
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			printf("%lu, ", n3);
		}
		else if (i == 50)
		{
			printf("%lu\n", n3);
		}
	}
	return (0);
}
