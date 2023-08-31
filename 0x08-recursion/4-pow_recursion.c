#include "main.h"

/**
 * _pow_recursion - reset the parsing value to 98
 * @x: second passing pointer
 * @y: power
 * Return: sad
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);	
}

