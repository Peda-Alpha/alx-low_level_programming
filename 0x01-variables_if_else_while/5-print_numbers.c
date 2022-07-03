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
int X;
for (X = '0'; X <= '9'; X++)
{
printf("%d", X);
}
putchar('\n');
return (0);
}
