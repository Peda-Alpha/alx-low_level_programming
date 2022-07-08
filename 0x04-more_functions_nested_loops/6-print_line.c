#include "main.h"
/**
 * print_diagonal - Function prototype
 * Description: Draws a straight line in the terminal
 * The line should end with a new line
 * If n is 0 or less, the function should only print a new line
 * @n: Number of times the character _ should be printed
 * Return: 0
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
