#include <stdio.h>

/**
 *
 * main - Print alphabet in lowercase, except q and e
 *
 * Return: 0
 *
 */

int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
