#include "main.h"

/**
 * print_lines - draws a straight line in the terminal
 * @n: Line length
 * Return: Nothing on success
 */
void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
	}
}

