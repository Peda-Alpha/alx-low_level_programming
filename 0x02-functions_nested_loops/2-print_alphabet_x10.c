#include "main.h"
/**
 * print_alphabet_x10 - _putchar prototype
 * Description: Print 10 times the alphabet in lowercase
 * It should be followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int z;

	for (x = 1; x < 11; x++)
	{
	for (z = 'a'; z <= 'z'; z++)
	{
	_putchar(z);
	}
	_putchar('\n');
	}
}
