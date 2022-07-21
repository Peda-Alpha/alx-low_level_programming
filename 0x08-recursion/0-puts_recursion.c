#include "main.h"
/**
 * _puts_recursion - Function prototype
 * Description: Print a string followed by a new line
 * @s: Pointer variable of type char
 * Return: void
 * **/
void _puts_recursion(char *s)
{
	/* Base case to ensure the loop is exited */
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	s++;
	_puts_recursion(s);
}
