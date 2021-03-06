#include "main.h"
/**
 * _pow_recursion - Function prototype
 * Description: Returns the value of x raised to a power y
 * @x: Value to be raised to a power
 * @y: Value of the power raised
 * Return: An integer
 * **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
