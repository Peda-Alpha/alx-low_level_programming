#include "main.h"
/**
 * print_rev - Function prototype
 * Description: Print a string in reverse
 * Followed by a new line
 * @s: Pointer variable of type char
 * Return: void
 * **/
void print_rev(char *s)
{
	int x;

	/* accounts for every character of the string without null character */
	for (x = 0; s[x] != '\0'; x++)
	{
		x++;
	}
	/* print char from the last index as you decrement */
	while (x - 1 >= 0)
	{
		_putchar (s[x - 1]);
		x--;
	}
	_putchar ('\n');
}
