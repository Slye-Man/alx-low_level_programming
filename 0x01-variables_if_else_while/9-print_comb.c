#include <stdio.h>

/**
 * main - Print single digit with a comma (,) and space
 *
 * Return: 0
 *
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
