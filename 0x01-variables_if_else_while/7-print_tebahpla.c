#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the lowercase alphabet in reverse
 * It should bevfollowed by a new line
 * All code must be in the main function
 * Return: 0
 */
int main(void)
{
char X;
for (X = 'z'; X >= 'a'; X--)
{
putchar(X);
}
putchar('\n');
return (0);
}
