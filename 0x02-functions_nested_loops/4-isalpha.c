#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: is any letter
 * Return: 1 if alphabetic else  return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
