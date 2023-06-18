#include <stdio.h>

/**
 * main - A  program that prints combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
		for (d = c; d <= 99; d++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (!(c == 99 && d == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
