#include "main.h"
/**
 * _isdigit - Function prototype
 * Description: Checks for a digit (0 through 9)
 * @c: int type character
 * Return: 1 if c is a digit else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
