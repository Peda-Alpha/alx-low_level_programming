#include <main.h>
/**
 * main - _putchar prototype
 * Description: Print 10 times the alphabet in lowercase
 * It should be followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void);
{
	for (x = 'a'; x <= 'z'; x++)
	{
	for (z = 'a'; z <= 'z'; z++)
	{
	_putchar(z);
	}
	putchar('\n');
	return (0);
}
