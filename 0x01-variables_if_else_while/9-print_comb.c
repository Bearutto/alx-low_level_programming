#include <stdio.h>

/**
 * main - A  program that prints combinations of single-digit numbers
 *Return: Alwaysb 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			printf("%d%d", x, y);
		}
	}
	printf("\n");
	return (0);
}
