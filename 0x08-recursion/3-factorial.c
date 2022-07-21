#include "main.h"
/**
 * factorial - Function prototype
 * Description: Returns the factorial of a given number
 * If n is lower than 0, return -1 (indicating error)
 * Factorial of 0 is 1
 * @n: Variable to hold number
 * Return: Always 0
 * **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
