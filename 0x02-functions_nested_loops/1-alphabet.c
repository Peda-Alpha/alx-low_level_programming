#include "main.h"
/**
 * print_alphabet - Function
 * Description: Print the alphabet in lowercase
 * It should be followed by a new line
 * Return: Always void
 */
void print_alphabet(void) /** Declare the function */
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar (x);
	}
	_putchar ('\n');
}
