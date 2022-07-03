#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Print all the numbers of base 16 in lowercase
 * It should be followed by a new line
 * All code must be in the main function
 * Return: 0
 */
int main(void)
{
char X;
char Z;
for (X = '0'; X <= '9'; X++)
{
putchar(X);
}
for (Z = 'a'; Z <= 'f'; Z++)
{
putchar(Z);
}
putchar('\n');
return (0);
}
