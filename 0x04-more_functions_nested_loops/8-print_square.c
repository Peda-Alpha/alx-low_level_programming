#include "main.h"
/**
 * print_square - Function prototype
 * Description: Print a square
 * Followed by a new line
 * @size: size of the square
 * If size is 0 or less print new line
 * Use character # to print the square
 * Return: 0
 */
void print_square(int size)
{
	int x;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (z = size; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
