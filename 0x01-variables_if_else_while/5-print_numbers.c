#include <stdio.h>

/**
 * main - A program that prints single digit numbers of base 10 from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
