#include "main.h"
/**
 * swap_int - Function prototype
 * Description: Swaps the values of two integers
 * @a: Pointer of type int
 * @b: Pointer of type int
 * Return: void
 * **/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
