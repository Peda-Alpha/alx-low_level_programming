#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Description: Assign a random number to a variable
*And if the last digit is greater than 5
*Return: 0
* betty style doc for function main goes there
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
if ((n % 10) < 6 && (n % 10 != 0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
if ((n % 10) == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}