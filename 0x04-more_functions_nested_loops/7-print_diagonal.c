#include "main.h"
/**
 * print_diagonal - Function prototype
 * Description: Draws a diagonal on the terminal
 * Followed by a new line
 * @n: Number of times the character \ should be printed
 * If n is 0 or less, function should only print a new line
 * Return: 0
 */
void print_diagonal(int n)
{
	int x;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (z = 1; z <= x; z++)
			{
				if (z != x)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
