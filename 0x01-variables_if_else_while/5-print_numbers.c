#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 *
 */

int main(void)
{
	for (int n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
