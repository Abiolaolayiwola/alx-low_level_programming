#include "main.h"

/**
 * _abs - compute the absolute value of an integer.
 * @c: The number is to be computed
 * Returt
 */
int _abs(int c)
{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

