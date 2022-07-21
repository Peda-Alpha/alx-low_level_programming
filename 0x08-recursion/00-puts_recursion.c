#include "main.h"
/**
 * _puts_recursion - Function prototype
 * Description: Prints a string recursively
 * @s: Pointer variable of type char
 * Return: void
 * **/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
