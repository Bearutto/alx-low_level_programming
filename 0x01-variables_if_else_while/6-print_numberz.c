#include <stdio.h>

/**
 * main -A program program that prints single digit numbers of base 10 from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar (num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
