#include "main.h"
/**
 * _strlen_recursion - Function prototype
 * Description: Return the length of a string
 * @s: Pointer variable of type char
 * This holds the string to be counted
 * Return: Always 0
 * **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
