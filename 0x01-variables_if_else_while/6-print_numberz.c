#include <stdio.h>
/**
 *main - Entry point
 *Description: Print all single digit numbers of base 10
 *Start from 0
 *Do not use variable of type char
 *Return: 0
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
