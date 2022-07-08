#include "main.h"
/**
 * more_numbers - Function prototype
 * Description: Prints 10 times the numbers from 0 to 14
 * Followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int x;
	int z;

	for (x = 1; x <= 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
				_putchar('0' + 1);
			_putchar('0' + (z % 10));
		}
		_putchar('\n');
	}
}
