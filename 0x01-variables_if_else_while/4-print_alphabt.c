#include <stdio.h>
/**
 *main -Entry point
 *Description: Print the alphabets in lowercase excluding 'e' and 'q'
 *Only use the putchar function twice
 *Return: 0
 */
int main(void)
{
char X;
for (X = 'a'; X <= 'z'; X++)
{
if (X == 'e' || X == 'q')
{
X++;
}
putchar(X);
}
putchar('\n');
return (0);
}
