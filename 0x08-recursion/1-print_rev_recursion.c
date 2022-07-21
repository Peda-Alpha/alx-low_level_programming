#include "main.h"
/**
 * _print_rev_recursion - Function prototype
 * Description: Print string in reverse
 * @s: Pointer variable of type char
 * Return: void
 * **/
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
