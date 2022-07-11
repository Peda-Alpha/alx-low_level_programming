#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Write a program that prints the numbers from 1 to 100
 * Followed by a new line
 * For multiples of three (3), print fizz
 * For multiples of five (5), print buzz
 * For numbers which are multiples of both (3) and (5), print fizzbuzz
 * Each number or word should be separated by a space
 * Return: Always 0
 */
int main(void)
{
	int x;

	x = 1;
	printf("%d", x);

	for (x = 2; x <= 100; x++)
	{
		printf(" ");

		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			printf("Fizz");
				if (x % 5 == 0)
				printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
	}

	printf("\n");
	return (0);
}
