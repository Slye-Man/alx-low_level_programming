#include <stdio.h>

/**
 *
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	for (int letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
