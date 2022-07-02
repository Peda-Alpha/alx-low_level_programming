#include <stdio.h>
/**
 *main - Entry point
 *Description: Print alphabets in lowercase
 *Then in uppercase
 *Followed by a new line
 *Return: 0
 */
int main(void)
{
char X;
char Z;
for (X = 'a'; X <= 'z'; X++)
{
putchar(X);
}
for (Z = 'A'; Z <= 'Z'; Z++)
{
putchar(Z);
}
{
putchar('\n');
}
return (0);
}
