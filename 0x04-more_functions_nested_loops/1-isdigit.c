#include "main.h"

/**
 * _isdigit -  that checks for a digit (0 through 9).
 * @c: digit being checked
 * Return: 1  if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c < 58))
		return (1);
	else
		return (0);
}

