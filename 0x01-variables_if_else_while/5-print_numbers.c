#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all single digit numbers of base 10
 * Start from 0
 * All code should be in the main function
 * Return: 0
 */
int main(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
