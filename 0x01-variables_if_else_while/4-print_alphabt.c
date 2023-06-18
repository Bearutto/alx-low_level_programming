#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *return: always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while
		(letter <= 'z')
		{
			if (letter != 'q' && letter != 'e')
			{
				putchar (letter);
			}
			letter++;
		}
	putchar ('\n');
	return (0);
}
