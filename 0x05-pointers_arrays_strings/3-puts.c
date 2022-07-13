#include "main.h"
/**
 * _puts - Function prototype
 * Description: Prints a string to standard ouput
 * Followed by a nes line
 * @str: Pointer variable of type char
 * Return: void
 * **/
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar (str[x]);
		continue;
	}
	_putchar ('\n');
}
