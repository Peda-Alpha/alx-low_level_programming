#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combinations of three digits
 * The three digits must be different (012 = 120 = 102 = 021 = 210 = 201)
 * Print in ascending order
 * Don't use any variable of type char
 * All your code must be in the main function
 * Return: 0
 */
int main(void)
{
int x;
int y;
int z;
for (x = '0'; x <= '7'; x++)
{
for (y = '1'; y <= '8'; y++)
{
for (z = '2'; z <= '9'; z++)
{
if (x != y && y != z && x != z)
{
if (x > y || y > z || x > z)
{
continue;
}
putchar(x);
putchar(y);
putchar(z);
if (x == '7' && y == '8' && z == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar ('\n');
return (0);
}
