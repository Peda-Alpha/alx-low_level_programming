#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combinations of two digits
 * The two digits must be different (01 = 10)
 * Print in ascending order
 * Don't use any variable of type char
 * All code must be in the main function
 * Return: 0
 */
int main(void)
{
int x;
int z;
for (x = '0'; x <= '9'; x++)
{
for (z = '1'; z <= '9'; z++)
{
if (x != z)
{
if (x > z)
{
continue;
}
putchar(x);
putchar (z);
if (x == '8' && z =='9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
