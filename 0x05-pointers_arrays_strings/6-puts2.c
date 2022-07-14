#include "main.h"
/**
 * puts2 - Function prototype
 * Description: Print every other character of a string
 * Followed by a new line
 * @str: Pointer variable of type char
 * Return: void
 * **/
void puts2(char *str)
{
	int x = 0, y = 0;

	while (str[x++])
	{
		y++;
	}
	
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
